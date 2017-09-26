note
	description: "A linear container implemented via an array."
	author: "Jackie and Tyler Noble"
	date: "$Date$"
	revision: "$Revision$"

class
	ARRAYED_CONTAINER

create
	make

feature {NONE} -- Implementation of container via an array

	imp : ARRAY[STRING]

feature -- Constructors

	make
			-- Initialize an empty container.
		do
			-- This implementation is correct, just given to you.
			create {ARRAY[STRING]} imp.make_empty
		ensure
			--Checks to see if the container is empty
			empty_container:
				imp.is_empty
		end


feature -- Commands

	assign_at (i: INTEGER; s: STRING)
			-- Change the value at position 'i' to 's'.
		require
		valid_index (i)
		do
			imp [i] := s
			-- Uncomment this to produce a wrong implementation
--			if i > 1 then
--				imp [1] := s
--			end
		ensure
			size_unchanged: imp.count = (old imp.twin).count
			item_assigned: imp [i] ~ s
			others_unchanged:
				across
					1 |..| imp.count as j
				all
					j.item /= i implies imp [j.item] ~ (old imp.twin) [j.item]
				end
		end

	insert_at (i: INTEGER; s: STRING)
			-- Insert value 's' into index 'i'.
		require
		valid_index (i)
		do
			imp.force (s, i)
		ensure
			size_changed: imp.count = (old imp.twin.count+1)
			inserted_at_i: imp.at (i) ~ s
			left_half_the_same:
			across
			imp.lower |..| (i-1) as j
			all
			imp[j.item] ~ (old imp.twin)[j.item]
			end

			right_half_the_same: true
            across
          i  |..| (old imp.twin).upper as j
            all
             imp[j.item+1]~(old imp.twin)[j.item]
            end
		end

	delete_at (i: INTEGER)
			-- Delete element stored at index 'i'.

		require
		valid_index (i)
	local
			string_forward: STRING
		do
			across
			i |..| (imp.upper-1) as j
			loop
				string_forward := (imp[j.item+1])
				imp.put (string_forward, j.item)
			end
			imp.remove_tail (1)
		ensure
			size_changed: imp.count = (old imp.twin.count-1)
			left_half_the_same:
			across
			imp.lower |..| (i-1) as j
			all
			imp[j.item] ~ (old imp.twin)[j.item]
			end
			right_half_the_same:
			across
         	 i  |..| ((old imp.twin).upper-1) as j
            all
             imp[j.item-1]~(old imp.twin)[j.item]
            end
		end

	insert_last (s: STRING)
			-- Insert 's' as the last element of the container.
		do
		  imp.force (s, imp.upper+1)
		ensure
			size_changed: (imp.count > old imp.twin.count)
			last_inserted: (imp.at (imp.upper) ~ s)
			others_unchanged:
			across
					old imp.twin.lower |..| old imp.twin.upper	as j
					all
						imp[j.item]~ (old imp.twin)[j.item]
					end
		end

	remove_first
			-- Remove first element from the container.
		require
			--not empty
		do
			imp.remove_head (1)
		ensure
			size_changed: (imp.count < old imp.twin.count)
			others_unchanged:
			across
			old imp.twin.lower  |..| imp.upper as j
			all
				imp[j.item]~ (old imp.twin)[j.item+1]
			end
		end

feature -- Queries
--This feature uses the already given count to give the count of the array
	count: INTEGER
	do
	Result := imp.count
	ensure
	Result = imp.upper-imp.lower+1
	end


	 -- Your task
	  -- Number of items currently stored in the container.
      -- It is up to you to either implement 'count' as an attribute,
      -- or to implement 'count' as a query (uniform access principle).

	valid_index (i: INTEGER): BOOLEAN
			-- Is 'i' a valid index of current container?

	do
		Result := imp.valid_index(i)

		ensure
			size_unchanged:
			Result = (imp.count = old imp.twin.count)

			result_correct:
			Result = (imp.lower <= i and  i <= imp.upper)

			no_elements_changed:
			across
			old imp.twin.lower |..| old imp.twin.upper	as j
			all
				imp[j.item]~ (old imp.twin)[j.item]
			end

		end

	get_at (i: INTEGER): STRING
			-- Return the element stored at index 'i'.
		require
		valid_index (i)
		do
		Result := imp[i]

		ensure
			size_unchanged:Result = (imp.count) = (old imp.twin).count
			result_correct: Result = (imp.item (i) = imp.item (i))
			no_elements_changed:
			across
			old imp.twin.lower |..| old imp.twin.upper	as j
			all
				imp[j.item]~ (old imp.twin)[j.item]
			end
		end

invariant
	-- Size of container and size of implementation array always match.
	consistency: imp.count = count
end


