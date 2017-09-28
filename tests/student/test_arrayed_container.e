
note
	description: "Tests that Tyler is making"
	author: "Tyler Noble"
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_ARRAYED_CONTAINER
inherit
	ES_TEST


create
	make
feature -- Adding tests
	make
		do
			add_boolean_case (agent test_make)
			add_boolean_case (agent test_count)
			add_boolean_case (agent test_insert_last)
			add_boolean_case (agent test_insert_at)
			add_boolean_case (agent test_delete_at)
			add_boolean_case (agent test_remove_first)
			add_violation_case_with_tag("item_assigned", agent test_assign_at_post)
			add_violation_case_with_tag("right_half_the_same", agent test_delete_at_post)
		--	add_violation_case_with_tag("right_half_the_same", agent test_insert_at_post) fucked
			add_violation_case_with_tag("others_unchanged", agent test_remove_first_post)

		end
feature --Test boolean cases

test_make: BOOLEAN
		-- This one just tests the basic creation and function of the container
		local
			imp : ARRAYED_CONTAINER
		do
			comment("T0: Test make procedure ")
	create {ARRAYED_CONTAINER} imp.make
			imp.insert_last("Joe")
			imp.insert_last("Jim")
			imp.insert_last ("Jemima")
			Result := imp.count > 0
			end
			test_count: BOOLEAN
		-- This one just tests the count feature
		local
			imp : ARRAYED_CONTAINER
		do
			comment("T1: Test count querie ")
	create {ARRAYED_CONTAINER} imp.make
			imp.insert_last("Joe")
			imp.insert_last("Jim")
			imp.insert_last ("Jemima")
			Result := imp.count ~ 3
			end

			test_insert_last : BOOLEAN
		-- Tests the insert last procedure
		local
			imp : ARRAYED_CONTAINER
		do
			comment("T2: Test the insert last  procedure ")
	create {ARRAYED_CONTAINER} imp.make
			imp.insert_last("Joe")
			result := "Joe" ~ imp.get_at (1)
			check result end
			imp.insert_last("Jim")
			result := "Jim" ~ imp.get_at (2)
			check result end
			imp.insert_last ("Jemima")
			result := "Jemima" ~ imp.get_at (3)
			check result end
			end

		test_insert_at : BOOLEAN
		-- Tests the insert last procedure
		local
			imp : ARRAYED_CONTAINER
		do
			comment("T3: Test the insert at procedure ")
	create {ARRAYED_CONTAINER} imp.make
			imp.insert_last("Joe")
			imp.insert_last("moe")
			imp.insert_last("floe")
			imp.insert_at (2,"BigLips")

			result := "BigLips" ~ imp.get_at (2)

			check result end
			end
			test_delete_at: BOOLEAN
				-- Tests the insert last procedure
				local
					imp : ARRAYED_CONTAINER
				do
					comment("T4: Test the delete at procedure ")
			create {ARRAYED_CONTAINER} imp.make
					imp.insert_last("JohnCena")
					imp.insert_last("GetsDeleted")
					imp.insert_last("Jimbo")
					imp.insert_last("Nirple")
					imp.insert_last ("makeItStop")

					imp.delete_at (2)
					result :=
						imp.get_at (3) ~ "Nirple"
					check result end
					end
		test_remove_first: BOOLEAN
				-- Tests the delete first procedure
				local
					imp : ARRAYED_CONTAINER
				do
					comment("T5: Test the delete first procedure ")
			create {ARRAYED_CONTAINER} imp.make
					imp.insert_last("GetsDeleted")
					imp.insert_last("JohnCena")
					imp.insert_last("Jimbo")
					imp.insert_last("Nirple")
					imp.insert_last ("makeItStop")

					imp.remove_first
					imp.remove_first
					result :=
						imp.count = 3
					check result end
end
feature --test violation cases
test_assign_at_post
--test the proper assignment post condition
	local
		imp: BAD_ASSIGN_AT
	do
		comment ("T6: Make the post condition on assign at fail for the second post condition")
		create imp.make
		imp.insert_last ("Munder")
		imp.insert_last ("BoBunder")
		imp.insert_last("flunder")
		imp.assign_at (2, "plzfail")
end
test_delete_at_post
--test the proper assignment post condition
	local
		imp: BAD_DELETE_AT
	do
		comment ("T7: Make the post condition on delete at fail for the first post condition")
		create imp.make
		imp.insert_last ("Munder")
		imp.insert_last ("BoBunder")
		imp.insert_last("flunder")
		imp.delete_at (2)
end
test_insert_at_post
--test the proper assignment post condition
	local
		imp: BAD_INSERT_AT
	do
		comment ("T8: Make the post condition on insert at fail for the first post condition")
		create imp.make
		imp.insert_last ("Munder")
		imp.insert_last ("BoBunder")
		imp.insert_last("flunder")
		imp.insert_at(1,"fidgetspinner")
end


test_remove_first_post
--test the proper assignment post condition
	local
		imp: BAD_REMOVE_FIRST
	do
		comment ("T9: Make the post condition on insert at fail for the first post condition")
		create imp.make
		imp.insert_last ("Munder")
		imp.insert_last ("BoBunder")
		imp.insert_last("flunder")
		imp.remove_first

end

end
