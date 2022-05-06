format: 
	find . -regex '.*\.\(cpp\|c\)' -exec clang-format -style=file -i {} \;