
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
		end
feature --Test cases

test_thing : BOOLEAN
		-- What the test does
		local
			imp : ARRAY[STRING]
		do
			comment("T1: Test make procedure ")
	create {ARRAY[STRING]} imp.make_empty
			imp.force ("Alan", 1)
			imp.force ("Mark", 2)
			imp.force ("Tom", 3)
			Result := imp.count > 1
			end

test_thing2 : BOOLEAN
		-- What the test does
		local
			imp : ARRAY[STRING]
		do
			comment("T2: test assign at follows post conditions ")
	--		create imp.make(1,5)
			Result := TRUE
			end
test_thing3 : BOOLEAN
		-- What the test does
		local
			imp : ARRAY[STRING]
		do
			comment("T3: test assign at follows pre conditions ")
	--		create imp.make(1,5)
			Result := TRUE
			end
test_thing4 : BOOLEAN
		-- What the test does
		local
			imp : ARRAY[STRING]
		do
			comment("T4:Test insert at post condition ")
create {ARRAY[STRING]} imp.make_empty
			imp.force ("Alan", 1)
			imp.force ("Mark", 2)
			imp.force ("Tom", 3)
			Result := TRUE
			end
test_thing5 : BOOLEAN
		-- What the test does
		local
			imp : ARRAY[STRING]
		do
			comment("T5: test delete at's post condition ")
create {ARRAY[STRING]} imp.make_empty
			imp.force ("Alan", 1)
			imp.force ("Mark", 2)
			imp.force ("Tom", 3)
			Result := TRUE
			end
			test_thing6 : BOOLEAN
		-- What the test does
		local
			imp : ARRAY[STRING]
		do
			comment("T6: test Insert last post condition ")
create {ARRAY[STRING]} imp.make_empty
			imp.force ("Alan", 1)
			imp.force ("Mark", 2)
			imp.force ("Tom", 3)
			Result := TRUE
			end
			test_thing7 : BOOLEAN
			-- What the test does
			local
				imp : ARRAY[STRING]
			do
				comment("T7: Testing remove first postcondition ")
create {ARRAY[STRING]} imp.make_empty
			imp.force ("Alan", 1)
			imp.force ("Mark", 2)
			imp.force ("Tom", 3)
			print(imp)
				Result := TRUE
				end
end
