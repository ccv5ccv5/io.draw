## **********************************************************
## Example description
## **********************************************************
## This example is the simplest to demonstrate the CSV import feature. It helps you understand the basic functionality. Most parameters in the configuration section have been removed to make the CSV data more readable (found at the end of this file). Note that one of the most common mistakes is ending a CSV line with a comma (,) when the last parameter is undefined. No such cells will be parsed properly. To end a CSV line properly, you have to apply at least a dummy value to the last parameter, such as "".
## **********************************************************
## Config
## **********************************************************
##
## Example CSV import. Use ## for comments and # for configuration settings. 
## The CSV data should be below the configuration.
## The following names are reserved and should not be used (or ignored):
## id, tooltip, placeholder(s), link and label (see below)
##
#
## Shape label with placeholders and HTML.
## Default is '%name_of_first_column%'.
#
# label: %name%
#
## Shape style (placeholders are replaced once).
## Default is the current style for style.
#
# style: whiteSpace=wrap;html=1;rounded=1;fillColor=%fill%;strokeColor=#000000;shape=%shape%
#
## Adds a prefix to the identity of shapes to make sure they do not collide with 
## existing shapes (whose IDs are numbers from 0..n, sometimes with a GUID prefix 
## in the context of realtime collaboration).
## Default is csvimport-.
#
# namespace: csvimport-
#
## Connections between rows ("from": "sourceColumn", "to": "targetColumn").
## Label, style and invert are optional. Defaults are '', current style and false.
## In addition to label, an optional fromlabel and tolabel can be used to name the column
## that contains the text to be used as connector label to the source or target (invert 
## is ignored).
## The label is concatenated in the form: fromlabel + label + tolabel if all are defined.
## The target column may contain a comma-separated list of values.
## Multiple connect entries are allowed.
#
# connect: {"from": "refs", "to": "id", "style": "curved=1;fontSize=11;"}
#
## Shape width. Possible value is a number (in px), auto or an @ sign followed by a column
## name that contains the value for the width. Default is auto.
#
# width: auto
#
## Shape height. Possible value is a number (in px), auto or an @ sign followed by a 
## column name that contains the value for the height. Default is auto.
#
# height: auto
#
## Padding for autosize. Default is 0.
#
# padding: 5
#
## Comma-separated list of ignored columns for metadata. (These can be
## used for connections and styles but will not be added as metadata.)
#
# ignore: id,refs
#
## Spacing between the shapes. Default is 40.
#
# nodespacing: 60
#
## Spacing between the levels in hierarchical layouts. Default is 100.
#
# levelspacing: 60
#
## Spacing between parallel connections. Default is 40. Use 0 to disable.
#
# edgespacing: 40
#
## Name or JSON of layout. Possible values are auto, none, verticaltree, horizontaltree,
## verticalflow, horizontalflow, organic, circle or a JSON string as used in 
## Layout, Apply.
## Default is auto.
#
# layout: auto
#
## **********************************************************
## CSV Data
## **********************************************************
## ---- CSV below this line. First line are column names. ----
id,name,shape,fill,refs
????????????,????????????,rectangle,#82b366,????????????
?????????,?????????,rectangle,#82b366,????????????
??????,??????,rectangle,#82b366,????????????
??????,??????,rectangle,#82b366,????????????
??????,??????,rectangle,#82b366,????????????
????????????,????????????,rectangle,#82b366,
????????????,????????????,ellipse,#b85450,????????????
????????????,????????????,rectangle,#82b366,????????????
????????????,????????????,rectangle,#82b366,????????????
????????????,????????????,rectangle,#82b366,????????????
??????,??????,rectangle,#82b366,????????????
??????,??????,rectangle,#82b366,????????????
????????????,????????????,rectangle,#82b366,????????????
