##
# Portions Copyright (c) 2002 SURVICE Engineering Company. All Rights Reserved.
# This file contains Original Code and/or Modifications of Original Code as
# defined in and that are subject to the SURVICE Public Source License
# (Version 1.3, dated March 12, 2002).
#
#                 P L U G I N . T C L
#
# Author(s):
#    Doug Howard
#    Bob Parker
#

# TYPE: tcltk
##############################################################
# 
# plugin.tcl
#
##############################################################
#
# Description:
#    Structure to hold plugin registry.
#
##############################################################

# *************** Sourced Files ***************
 
# *************** Interface *******************
 
# CLASS: Plugin
#
#
::itcl::class Plugin {
    #
    # VARIABLES
    #
    protected {
	variable msMajorType ""
	variable msMinorType ""
	variable msName ""
	variable msClass ""
	variable msVersion ""
	variable msFile ""
	variable msDeveloper ""
	variable msDesc ""
	variable msIcon ""
	variable msToolTip ""
	variable msAction ""
	variable msXmlAction ""
    }

    constructor {majorType minorType name class file \
		     {description ""} \
		     {version "1.0"} \
		     {developer ""} \
		     {icon ""} \
		     {toolTip ""} \
		     {action ""} \
		     {xmlAction ""}} {}
    destructor  {}
    
    #
    # METHODS
    #
    public {
	method get {{option -name}}
    }
}

###############################################################################
#
# METHOD: constructor
#
# Inputs:
#    majorType    - major type of plugin (i.e. Wizard, Utility etc.)
#    minorType    - minor type of plugin (i.e. Mged, Sdb etc.)
#    name    - name of the plugin
#    class   - Itcl/Itk class of the plugin
#    file    - tcl file the plugin resides in
#    desc    - short description of plugin
#    vers    - version number of plugin
#    devel   - plugin developer
#    icon    - icon for plugin
#    action - method/command for invoking the plugins action
#    xmlAction - method/command for invoking the plugins XML action
#
# Description:
#    create the registry for the plugin
#
###############################################################################
::itcl::body Plugin::constructor {majorType minorType name class file \
				      {description ""} \
				      {version "1.0"} \
				      {developer ""} \
				      {icon ""} \
				      {toolTip ""} \
				      {action ""} \
				      {xmlAction ""}} {
    set msMajorType $majorType
    set msMinorType $minorType
    set msName $name
    set msClass $class
    set msFile $file
    set msVersion $version
    set msDeveloper $developer
    set msDesc $description
    set msIcon $icon
    set msToolTip $toolTip
    set msAction $action
    set msXmlAction $xmlAction
}

###############################################################################
#
# METHOD: destructor
#
# Inputs:
#    none
#
# Description:
#    cleanup memory
#
###############################################################################
::itcl::body Plugin::destructor {} {
}

###############################################################################
#
# METHOD: get
#
# Inputs:
#    option - specify the value wanted
#
# Description:
#    get a certain value stored
#
###############################################################################
::itcl::body Plugin::get {{option -name}} {
    switch -- $option {
	-majorType   {return $msMajorType}
	-minorType   {return $msMinorType}
	-name        {return $msName}
	-class       {return $msClass}
	-version     {return $msVersion}
	-filename    {return $msFile}
	-developer   {return $msDeveloper}
	-description {return $msDesc}
	-icon        {return $msIcon}
	-tooltip     {return $msToolTip}
	-action      {return $msAction}
	-xmlAction   {return $msXmlAction}
    }
}