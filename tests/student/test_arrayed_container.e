
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

			add_boolean_case (agent test_count)
			add_boolean_case (agent test_insert_last)
			add_boolean_case (agent test_insert_at)
			add_boolean_case (agent test_delete_at)

		end
feature --Test cases

test_count: BOOLEAN
		-- This one just tests the basic creation and function of the container
		local
			imp : ARRAYED_CONTAINER
		do
			comment("T1: Test make procedure ")
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

end
