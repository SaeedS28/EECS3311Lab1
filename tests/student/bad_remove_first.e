note
	description: "Summary description for {BAD_REMOVE_FIRST}."
	author: "Tyler Noble"
	date: "$Date$"
	revision: "$Revision$"

class
	BAD_REMOVE_FIRST

inherit
	ARRAYED_CONTAINER
		redefine
			remove_first
		end
create
	make

feature -- bad versions of the methods that throw a post-condition violation
	remove_first
	local
		came_first: STRING
	do

		Precursor
		imp[1] := "mistakes"
	end

end
