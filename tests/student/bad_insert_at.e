note
	description: "Summary description for {BAD_INSERT_AT}."
	author: "Tyler Noble"
	date: "$Date$"
	revision: "$Revision$"

class
	BAD_INSERT_AT

inherit
	ARRAYED_CONTAINER
		redefine
			insert_at
		end
create
	make

feature -- bad versions of the methods that throw a post-condition violation
	insert_at (i: INTEGER; s: STRING)
	do
		Precursor (i,s)
			imp.force ("fjfk",2)
			imp.force ("fjfk",2)
	end

end
