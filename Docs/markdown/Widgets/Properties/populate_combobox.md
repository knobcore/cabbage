<a name="populate_combobox"><h3 style="padding-top: 40px; margin-top: 40px;"></h3></a>
**populate("filetype", "dir")** This will auto-populate the combobox with a set of files from a given directory. Users should specify the file type and the directory to look in. If using a combobox to recall previously recorded preset snapshots you must specify a filetype of "\*.snaps". When using the populate() identifier you do not need to use the items() identifier. If no directory is specified, Cabbage will look in the current working directory. See [Presets](./presets.html)

<!--UPDATE WIDGET_IN_CSOUND
    SIdentifier strcat SIdentifier, "populate(\"*.*\", \".\") "
-->