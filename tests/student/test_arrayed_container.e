note
	description: "Summary description for {TEST_ARRAYED_CONTAINER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_ARRAYED_CONTAINER
inherit
ES_TEST
create
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
		do
	--		add_test (create {TEST_ARRAYED_CONTAINER}.make)

		end
feature --Test cases

test_thing : BOOLEAN
		-- What the test does
		local
			imp : ARRAY[STRING]
		do
			comment("T1: ")
	--		create imp.make(1,5)
			Result := TRUE
			end

test_thing2 : BOOLEAN
		-- What the test does
		local
			imp : ARRAY[STRING]
		do
			comment("T2: ")
	--		create imp.make(1,5)
			Result := TRUE
			end
test_thing3 : BOOLEAN
		-- What the test does
		local
			imp : ARRAY[STRING]
		do
			comment("T3: ")
	--		create imp.make(1,5)
			Result := TRUE
			end
test_thing4 : BOOLEAN
		-- What the test does
		local
			imp : ARRAY[STRING]
		do
			comment("T4: ")
--		create imp.make(1,5)
			Result := TRUE
			end
test_thing5 : BOOLEAN
		-- What the test does
		local
			imp : ARRAY[STRING]
		do
			comment("T5: ")
	--		create imp.make(1,5)
			Result := TRUE
			end
			test_thing6 : BOOLEAN
		-- What the test does
		local
			imp : ARRAY[STRING]
		do
			comment("T6: ")
	--		create imp.make(1,5)
			Result := TRUE
			end
end
