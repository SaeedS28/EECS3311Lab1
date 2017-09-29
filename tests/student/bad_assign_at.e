mpnote
	description: "Summary description for {BAD_ASSIGN_AT}."
	author: "Tyler Noble"
	date: "$Date$"
	revision: "$Revision$"

class
	BAD_ASSIGN_AT

inherit
	ARRAYED_CONTAINER
		redefine
			assign_at
		end
create
	make

feature -- bad versions of the methods that throw a post-condition violation
	assign_at (i: INTEGER; s: STRING)
	do
		Precursor (i,s)
		imp[imp.count]:="WrongAgain!"
	end

end
