note
	description: "Summary description for {BAD_DELETE_AT}."
	author: "Tyler Noble"
	date: "$Date$"
	revision: "$Revision$"

class
	BAD_DELETE_AT

inherit
	ARRAYED_CONTAINER
		redefine
			delete_at
		end
create
	make

feature -- bad versions of the methods that throw a post-condition violation
	delete_at (i: INTEGER)
	do
		Precursor (i)
		imp.force ("MOCO",2)
	end

end
