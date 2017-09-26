
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

			add_boolean_case (agent test_thing)
		--	add_boolean_case (agent test_insert_last)

		end
feature --Test cases

test_thing : BOOLEAN
		-- What the test does
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


end
