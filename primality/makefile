#libfolder = "C:\Program Files\Microsoft SDKs\Windows\v7.0A\Lib"

#library =  $(libfolder)/user32.lib $(libfolder)/ws2_32.lib

WINDOWS_LIBS := kernel32.lib 	\
		user32.lib	\
		gdi32.lib	\
		winspool.lib	\
		comdlg32.lib	\
		advapi32.lib	\
		shell32.lib	\
		ole32.lib	\
		oleaut32.lib	\
		uuid.lib	\
		odbc32.lib	\
		ws2_32.lib	\
		odbccp32.lib   
		
ASSIGN_NAME := .

TARGET_NAME := primality

#LINT_FILE	:= assignment18.lnt

#DOXYGEN_FILE	:=	$(ASSIGN_NAME)/Doxyfile
			
			
# Binary Section

			
ASSIGNMENT_SOURCE_LIST := $(shell ls $(ASSIGN_NAME)/src/*.cpp)
ASSIGNMENT_OBJECT_LIST = $(patsubst $(ASSIGN_NAME)/src/%.cpp,$(ASSIGN_NAME)/bin/%.obj,$(ASSIGNMENT_SOURCE_LIST))



#get-pdb-name=$(subst .obj,.pdb,$(1))

target: $(ASSIGN_NAME)/bin/$(TARGET_NAME).exe



$(ASSIGN_NAME)/bin/$(TARGET_NAME).exe : $(ASSIGNMENT_OBJECT_LIST)
	@LINK /OUT:$@ /INCREMENTAL $(WINDOWS_LIBS) /ALLOWISOLATION /DEBUG /SUBSYSTEM:CONSOLE /TLBID:1 /DYNAMICBASE /NXCOMPAT /MACHINE:X86 /ERRORREPORT:QUEUE $^
	



	
$(ASSIGN_NAME)/bin/%.obj:$(ASSIGN_NAME)/src/%.cpp
	@cl /c /ZI /nologo /W3 /WX- /Od /Oy- /D "WIN32" /D _CRT_SECURE_NO_WARNINGS /D "_CONSOLE" /D "_UNICODE" /D "UNICODE" /Gm /EHsc /RTC1 /GS /fp:precise /Zc:wchar_t /Zc:forScope /Fo$@ /Gd /analyze- /errorReport:queue $^
					
clean:binary_clean 
#doxygen_clean codecheck_clean lint_clean binary_clean




binary_clean:
	rm -fr $(ASSIGN_NAME)/bin/*
	
#codecheck_clean:
	#rm -fr $(ASSIGN_NAME)/list/*
	
#lint_clean:
	#rm -fr $(ASSIGN_NAME)/lint/*

#doxygen_clean:
	#rm -fr $(ASSIGN_NAME)/doc/*
	

test:
	@echo $(ASSIGNMENT_SOURCE_LIST)
	@echo $(ASSIGNMENT_OBJECT_LIST)


# Lint section	C:\Lint

#LINT_CMD = lint-nt '-os($(patsubst %.lob,%.out,$@))' -iC:/Lint C:/Lint/std.lnt $(LINT_FILE) -isrc -b -dWIN32 -dDEBUG $^ '-oo($@)'

#$(ASSIGN_NAME)/lint/%.lob:$(ASSIGN_NAME)/src/%.cpp
	$(LINT_CMD)

# Lint Target
#lint:$(patsubst $(ASSIGN_NAME)/bin/%.obj,$(ASSIGN_NAME)/lint/%.lob,$(ASSIGNMENT_OBJECT_LIST)) 

# CodeCheck section C:\utils

#ASSIGNMENT_CC_LIST = $(patsubst $(ASSIGN_NAME)/src/%.cpp,$(ASSIGN_NAME)/list/%.lst,$(ASSIGNMENT_SOURCE_LIST))


#RULE_FILE := c:/utils/tspl.cc

#CodeCheck will use this variable to locate rule files.
#CCRULES:= c:/utils

#check:	$(ASSIGNMENT_CC_LIST) 
	#@echo "Codecheck Complete"
	
#$(ASSIGN_NAME)/list/%.lst:$(ASSIGN_NAME)/src/%.cpp
	#chknt.exe -R$(RULE_FILE) -DCODE_CHECK $^ -k7 -p -L$@  -H -I$(ASSIGN_NAME)/src -M 

	
#doxygen section

#doxygen:	
#	doxygen  $(DOXYGEN_FILE)
