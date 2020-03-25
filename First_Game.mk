##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=First_Game
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/jwhen/Desktop/Hacks/Text_Adventure
ProjectPath            :=C:/Users/jwhen/Desktop/Hacks/Text_Adventure/First_Game
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=jwhen
Date                   :=25/03/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="First_Game.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)./src $(IncludeSwitch)./lib 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)./lib/ 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS := -std=c++17 -Wall -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Item.cpp$(ObjectSuffix) $(IntermediateDirectory)/Utils.cpp$(ObjectSuffix) $(IntermediateDirectory)/Inventory.cpp$(ObjectSuffix) $(IntermediateDirectory)/Game.cpp$(ObjectSuffix) $(IntermediateDirectory)/Player.cpp$(ObjectSuffix) $(IntermediateDirectory)/Locations.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Item.cpp$(ObjectSuffix): Item.cpp $(IntermediateDirectory)/Item.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jwhen/Desktop/Hacks/Text_Adventure/First_Game/Item.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Item.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Item.cpp$(DependSuffix): Item.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Item.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Item.cpp$(DependSuffix) -MM Item.cpp

$(IntermediateDirectory)/Item.cpp$(PreprocessSuffix): Item.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Item.cpp$(PreprocessSuffix) Item.cpp

$(IntermediateDirectory)/Utils.cpp$(ObjectSuffix): Utils.cpp $(IntermediateDirectory)/Utils.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jwhen/Desktop/Hacks/Text_Adventure/First_Game/Utils.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Utils.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Utils.cpp$(DependSuffix): Utils.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Utils.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Utils.cpp$(DependSuffix) -MM Utils.cpp

$(IntermediateDirectory)/Utils.cpp$(PreprocessSuffix): Utils.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Utils.cpp$(PreprocessSuffix) Utils.cpp

$(IntermediateDirectory)/Inventory.cpp$(ObjectSuffix): Inventory.cpp $(IntermediateDirectory)/Inventory.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jwhen/Desktop/Hacks/Text_Adventure/First_Game/Inventory.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Inventory.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Inventory.cpp$(DependSuffix): Inventory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Inventory.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Inventory.cpp$(DependSuffix) -MM Inventory.cpp

$(IntermediateDirectory)/Inventory.cpp$(PreprocessSuffix): Inventory.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Inventory.cpp$(PreprocessSuffix) Inventory.cpp

$(IntermediateDirectory)/Game.cpp$(ObjectSuffix): Game.cpp $(IntermediateDirectory)/Game.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jwhen/Desktop/Hacks/Text_Adventure/First_Game/Game.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Game.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Game.cpp$(DependSuffix): Game.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Game.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Game.cpp$(DependSuffix) -MM Game.cpp

$(IntermediateDirectory)/Game.cpp$(PreprocessSuffix): Game.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Game.cpp$(PreprocessSuffix) Game.cpp

$(IntermediateDirectory)/Player.cpp$(ObjectSuffix): Player.cpp $(IntermediateDirectory)/Player.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jwhen/Desktop/Hacks/Text_Adventure/First_Game/Player.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Player.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Player.cpp$(DependSuffix): Player.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Player.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Player.cpp$(DependSuffix) -MM Player.cpp

$(IntermediateDirectory)/Player.cpp$(PreprocessSuffix): Player.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Player.cpp$(PreprocessSuffix) Player.cpp

$(IntermediateDirectory)/Locations.cpp$(ObjectSuffix): Locations.cpp $(IntermediateDirectory)/Locations.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jwhen/Desktop/Hacks/Text_Adventure/First_Game/Locations.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Locations.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Locations.cpp$(DependSuffix): Locations.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Locations.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Locations.cpp$(DependSuffix) -MM Locations.cpp

$(IntermediateDirectory)/Locations.cpp$(PreprocessSuffix): Locations.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Locations.cpp$(PreprocessSuffix) Locations.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/jwhen/Desktop/Hacks/Text_Adventure/First_Game/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


