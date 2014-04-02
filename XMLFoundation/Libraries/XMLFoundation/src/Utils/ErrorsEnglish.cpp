// --------------------------------------------------------------------------
//						United Business Technologies
//			  Copyright (c) 2000 - 2010  All Rights Reserved.
//
// Source in this file is released to the public under the following license:
// --------------------------------------------------------------------------
// This toolkit may be used free of charge for any purpose including corporate
// and academic use.  For profit, and Non-Profit uses are permitted.
//
// This source code and any work derived from this source code must retain 
// this copyright at the top of each source file.
// --------------------------------------------------------------------------
#include "GlobalInclude.h"

const char *pzBoundErrorDescriptions = 
"[Exception]\r\n"
"SubSystem=0\r\n"
"\r\n"
"[Profile]\r\n"
"SubSystem=1\r\n"
"0=Profile key [%s.%s] not found.\r\n"
"1=Profile section [%s] not found.\r\n"
"\r\n"
"[String]\r\n"
"SubSystem=2\r\n"
"0=Not enough memory for resize.\r\n"
"1=Subscript out of range.\r\n"
"2=Could not read file[%s].\r\n"
"3=Could not write file[%s].\r\n"
"\r\n"
"[Data abstraction]\r\n"
"SubSystem=3\r\n"
"0=Null environment for driver [%s].\r\n"
"1=Driver [%s] not found.\r\n"
"2=Function _string_GetStringValue not found.\r\n"
"3=Function _environment_GetConnection not found.\r\n"
"4=Function _exception_GetErrorCode not found.\r\n"
"5=Function _exception_GetErrorDescription not found.\r\n"
"6=Function _record_iterator_operator_not not found.\r\n"
"7=Error %d:%s\r\n"
"8=Function _record_iterator_operator_plusplus not found.\r\n"
"9=Function _column_iterator_operator_not not found.\r\n"
"10=Function _column_iterator_operator_plusplus not found.\r\n"
"11=Function _column_GetColumnName not found.\r\n"
"12=Function _column_GetColumnDataType not found.\r\n"
"13=Function _column_GetIoMode not found.\r\n"
"14=Function _column_GetColumnLength not found.\r\n"
"15=Function _record_ColumnIterator not found.\r\n"
"16=Function _recordset_GetNumberOfColumns not found.\r\n"
"17=Function _recordset_RecordIterator not found.\r\n"
"18=Function _recordset_GetNumberOfRecords not found.\r\n"
"19=Function _connection_Release not found.\r\n"
"20=Function _connection_GetCommand not found.\r\n"
"21=Function _connection_BeginTrans not found.\r\n"
"22=Function _connection_CommitTrans not found.\r\n"
"23=Function _connection_RollbackTrans not found.\r\n"
"24=Function _connection_ChangeSchema not found.\r\n"
"25=Function _connection_OpenConnection not found.\r\n"
"26=Function _connection_CloseConnection not found.\r\n"
"27=Function _command_BindParameter not found.\r\n"
"28=Function _command_BindColumn not found.\r\n"
"29=Function _command_Prepare not found.\r\n"
"30=Function _command_Execute not found.\r\n"
"31=Function _command_ExecuteEx not found.\r\n"
"32=Function _command_NumResultColumns not found.\r\n"
"33=Function _command_DescribeResultColumns not found.\r\n"
"34=Function _command_NumParameters not found.\r\n"
"35=Function _command_DescribeParameters not found.\r\n"
"36=Function _command_GetProcedure not found.\r\n"
"37=Function _command_DescribeProcedureColumns not found.\r\n"
"38=Function _command_DescribeTableColumns not found.\r\n"
"39=Function _command_GetDatabases not found.\r\n"
"40=Function _command_GetTables not found.\r\n"
"41=Function _command_GetProcedures not found.\r\n"
"42=Function _command_Fetch not found.\r\n"
"43=Function _command_Release not found.\r\n"
"44=No Driver Name[%s] could be loaded from [%s].\r\n"
"\r\n"
"[XMLProcedureCall]\r\n"
"SubSystem=4\r\n"
"0=You must specify the procedure you are trying to add this parameter to.\r\n"
"1=You must specify the procedure you are trying to add this attribute to.\r\n"
"2=Failed to write HTML output file [%s].\r\n"
"3=A procedure must be specified.\r\n"
"4=[%s] returned the following error:\n%s\r\n"
"5=Error during communication session.\r\n"
"6=Fatal Error while factory creating objects.\r\n"
"7=Nothing received from DataBroker.\r\n"
"8=You must specify a Data Source before calling Execute.\r\n"
"\r\n"
"[Socket data soruce]\r\n"
"SubSystem=5\r\n"
"2000=Failed to open input file [%s].\r\n"
"2001=Socket error: %d during operation [%s].\r\n"
"2002=Unhandled exception sending HTML stream.\r\n"
"2003=IIS Server reported the following error:\n%s\r\n"
"2004=Unhandled exception reading HTML stream.\r\n"
"\r\n"
"[User Defined]\r\n"
"SubSystem=6\r\n"
"0=%s\r\n"
"\r\n"
"[XML Parser]\r\n"
"SubSystem=7\r\n"
"0=Document name not found.(Line %ld, Position %ld)\r\n"
"1=Document type definition terminator not found.(Line %ld, Position %ld)\r\n"
"2=Missing equals sign between attribute and attribute value.(Line %ld, Position %ld)\r\n"
"3=Expected to find XML declaration end ']>'.(Line %ld, Position %ld)\r\n"
"4=Expected to find processing instruction end '?>'.(Line %ld, Position %ld)\r\n"
"5=Expected to find comment end '-->'.(Line %ld, Position %ld)\r\n"
"6=A string literal was expected, but no opening quote character was found. (Line %ld, Position %ld)\r\n"
"7=Expected to find entity terminator '>'.(Line %ld, Position %ld)\r\n"
"8=Expected to find element tag terminator '>'.(Line %ld, Position %ld)\r\n"
"9=Invalid entity value.(Line %ld, Position %ld)\r\n"
"10=Unexpected end of file.(Line %ld, Position %ld)\r\n"
"11=Expected tag name not found or invalid.(Line %ld, Position %ld)\r\n"
"12=End tag '%s' does not match the start tag '%s'.(Line %ld, Position %ld)\r\n"
"13=XML version not found.(Line %ld, Position %ld)\r\n"
"14=XML encoding not found.(Line %ld, Position %ld)\r\n"
"15=Unexpected standalone value.(Line %ld, Position %ld)\r\n"
"16=Document type declaration must match the element type of the root element.(Line %ld, Position %ld)\r\n"
"17=Expected element start tag not found.(Line %ld, Position %ld)\r\n"
"18=The following tags were not closed: %s(Line %ld, Position %ld)\r\n"
"19=Entity value not found.(Line %ld, Position %ld)\r\n"
"20=Expected white-space not found.(Line %ld, Position %ld)\r\n"
"21=Reference to undefined entity '%s'.(Line %ld, Position %ld)\r\n"
"22=System literal not found.(Line %ld, Position %ld)\r\n"
"23=Public literal not found.(Line %ld, Position %ld)\r\n"
"24=Unknown token found.(Line %ld, Position %ld)\r\n"
"25=& needs to be escaped with &amp; (Line %ld, Position %ld)\r\n"
"26=External markup specified but no callback registered to handle it.(Line %ld, Position %ld)\r\n"
"27=XML document is not well-formed.(Line %ld, Position %ld)\r\n"
"\r\n"
"[XML Object]\r\n"
"SubSystem=8\r\n"
"0=Failed to open input file [%s].\r\n"
"1=Failed to Serialize Object [%s].\r\n"
"2=Object[%s] contains an invalid object in the [%s] mapped to [%s]\r\n"
"\r\n"
"[XML Object Factory]\r\n"
"SubSystem=9\r\n"
"0=The list mapped to tag [%s] has an invalid list handler.\r\n"
"1=[%s] returned the following error:\n%s\r\n"
"2=Invalid XML.  Failed to create objects.\r\n"
"3=Missing ObjectID on type [%s] mapped to tag [%s] - Use of Keyed Data Structures require OID\r\n"
"\r\n"
"[Server Administration]\r\n"
"SubSystem=10\r\n"
"0=No 'user' and 'pass' were provided with this request.\nAccess denied.\r\n"
"1=Administrator password incorrect.\r\n"
"2=User password incorrect.\r\n"
"3=[%s] has not been granted permissions.\nAsk your system administrator to add this\nuser name to Settings.xml on the server.\r\n"
"4=No user name provided.\nAccess denied.\r\n"
"5=Could not write file: [%s].\r\n"
"6=No Object found with key [%s].\r\n"
"7=use this syntax: get=c:\\path\\file.ext\r\n"
"8=Could not open file: [%s].\r\n"
"9=Prefix the file data with FileName.ext\r\n"
"\r\n"
"[CInterface]\r\n"
"SubSystem=11\r\n"
"0=Failed to obtain entry point [%s] in driver [%s]\r\n"
"1=%s\r\n"
"2=Method[%s] not exported by ExposedMethods() in [%s]\r\n"
"\r\n"
"[XML server]\r\n"
"SubSystem=12\r\n"
"0=CSharedComponentManager::AddComponent() has no handler for objects of type [%s].\r\n"
"1=MergeValue not supplied.\r\n"
"2=Invalid parameter specified for graft operation.\r\n"
"3=Invalid input parameter type for graft operation.\r\n"
"4=The element [%s] cannot be used as a source to fulfill parameter[%s] of [%s::%s] in Element[%s] because its value is dynamic and could not be resolved.\r\n"
"5=%s\r\n"
"6=Invalid shared component reference [%s].\r\n"
"7=The XML server does not support long character data as an output parameter.\r\n"
"8=The XML server does not support the binary datatype.\r\n"
"9=Unknown data type.\r\n"
"10=Paramater list not available.  Did the parameters to a graft operation change?\r\n"
"11=Parameter %s is not an output parameter.\r\n"
"12=Recall not supported in this context.\r\n"
"13=Recall variable [%s] not found.\r\n"
"14=Specified XSL template [%s] does not exist.\r\n"
"15=Cannot open [%s].\r\n"
"16=%s\nDisk I/O or Permissions Error [%d] opening [%s].\nCheck the permissions settings in your Operating System or Web Server.\r\n"
"17=Invalid parameter specified for graft operation.\r\n"
"18=Document node not found for graft operation input.\r\n"
"19=No batch execution handler for XMLDataNode/DataSource=%d.\r\n"
"20=Failed to load shared library [%s] to run procedure [%s].\r\n"
"21=Could not find procedure [%s] in module [%s]. \nDid you extern \"C\" it? \nDid you EXPORT it in the DEF file?\r\n"
"22=Unhandled exception in Procedure [%s], module [%s].\r\n"
"23=TransactXML server currently does not support whitespace in stored procedure names.\r\n"
"24=This feature requires administrative authority.\r\n"
"25=Not enough arguments supplied to InvokeMethod().\r\n"
"26=Expected %d parameters - You supplied %d parameters.\r\n"
"27=Directory [%s] does not exist or cannot be accessed.\r\n"
"28=Failed to graft data[%s] into branch [%s] from [%s] reason [%s]\r\n"
"29=No Custom Non-XML definition is specified in Rule[%s].\r\n"
"30=Rule '%s' not found.\r\n"
"\r\n"
"[C runtime exception]\r\n"
"SubSystem=13\r\n"
"0=Access violation.\r\n"
"1=Data type misalignment.\r\n"
"2=Breakpoint.\r\n"
"3=Single step.\r\n"
"4=Array bounds exceeded.\r\n"
"5=Float denormal orerand.\r\n"
"6=Float divide by zero.\r\n"
"7=Float inexact result.\r\n"
"8=Float invalid operation.\r\n"
"9=Float overflow.\r\n"
"10=Float stack check.\r\n"
"11=Float underflow.\r\n"
"12=Integer divide by zero.\r\n"
"13=Integer overflow.\r\n"
"14=Priv instruction.\r\n"
"15=Page error.\r\n"
"16=Illegal instruction.\r\n"
"17=Non-continuable exception.\r\n"
"18=Stack overflow.\r\n"
"19=Invalid disposition.\r\n"
"20=Page guard fault.\r\n"
"21=Invalid handle.\r\n"
"22=C runtime exception.\r\n"
"23=Interrupt detected.\r\n"
"24=HUP Signal detected.\r\n"
"25=Broken Pipe Interrupt detected.\r\n"
"\r\n"
"[JavaIntegration]\r\n"
"SubSystem=14\r\n"
"1=JNI_CreateJavaVM() failed. Error code[%ld]\nThis may be caused by a wrong version of java or incorrect LD_LIBRARY_PATH\r\n"
"2=JavaVM - Can't attach current thread to VM\r\n"
"3=JavaVM - Can't locate the [%s] class.\r\n"
"4=JavaVM - Can't locate method [%s].\r\n"
"\r\n"
"[CStdCallIntegration]\r\n"
"SubSystem=15\r\n"
"1=No components at location [%s]\r\n"
"2=Failed to obtain entry point [%s]\r\n"
"3=Error [%s] while loading Shared Lib[%s]\r\n"
"4=Failed to load DLL [%s]\nError Code [%d]\n Reason[%s]\r\n"
"5=Method[%s] is described by by module[%s] to require [%d] arguments, but you supplied [%d] arguments.\r\n"
"6=Failed to obtain entry point[ExposedMethods] in [%s]\r\n"
"7=Error [%s] while loading Shared Lib[%s]\r\n"
"8=Expected a [|] in [%s] returned by ExposedMethods.  Driver implementation error.\r\n"
"\r\n"
"[COMIntegration]\r\n"
"SubSystem=16\r\n"
"1=COM: LoadTypeLib failed on file [%s]\r\n"
"2=Failed to get TypeAttributes from Typelib.\r\n"
"3=Failed to retrieve Interface name from Typelib.\r\n"
"4=COM: Attempted to bind [%s] to unsupported type [%s]\r\n"
"5=Interface does not support IDispatch or it's not registered.\n\nWe plan to drop this requirement in a future version, \nfor now support the IDispatch Interface on your Objects.\nC++ - add [oleautomation] prior to the Interface in your IDL\n\nVisual Basic - build your extension object as an OCX control\n\r\n"
"6=Invoke failed[%s]\r\n"
"7=COM: Unsupported datatype [%s][%d] as return value\r\n"
"\r\n"
"[CGI Server]\r\n"
"SubSystem=17\r\n"
"1=No CONTENT_LENGTH environment variable is set\r\n"
"2=REQUEST_METHOD is not GET or POST\r\n"
"3=REQUEST_METHOD environment variable is set\r\n"
"4=Malformed Request.  Missing [=] after [%s] in [%s]\r\n"
"5=Unknown Request[%s]\r\n"
"\r\n"
"[ComponentInterface]\r\n"
"SubSystem=18\r\n"
"1=[%s] produced a NULL or empty return value\r\n"
"2=[%s] while Invoking [%s]\r\n"
"3=Return Equal [%s] while Invoking [%s]\r\n"
"4=Return Starts With [%s] while Invoking [%s]\r\n"
"5=Return Contains [%s] while Invoking [%s]\r\n"
"\r\n"
"[CustomException] \r\n"
"SubSystem=19\r\n"
"1=[%s] returned an empty value.\r\n"
"3=[%s] return value equals [%s]\r\n"
"4=[%s] return value starts with [%s]\r\n"
"5=[%s] return value contains [%s]\r\n"
"\r\n"
"[XSL]\r\n"
"SubSystem=20\r\n"
"0=Required attribute [%s] was not found in stylesheet element [%s].\r\n"
"1=%s\r\n"
"2=Unhandled exception parsing XML stream.\r\n"
"3=Debug: bsearch out of order %s >= %s.\r\n"
"4=A prior operation has already terminated the element.  The attribute cannot be added.\r\n"
"5=Malformed argument list - %s.\r\n"
"6=The value of the select attribute %s is invalid.\r\n"
"7=x-path function %s not implemented.\r\n"
"8=x-path function %s takes %s argument(s).  %d argument(s) were supplied.\r\n"
"9=Location pattern is invalid (%s).\r\n"
"10=Invalid stylesheet.  Could not find root node [stylesheet] or [transform].\r\n"
"11=xsl element <%s> is not allowed at this level.\r\n"
"12=non-xsl element <%s> is not allowed at this level.\r\n"
"13=Invalid expression %s.\r\n"
"14=Invalid pattern %s.\r\n"
"15=Invalid argument %s supplied to x-path function %s.\r\n"
"16=The contents of <xsl:variable name=[%s] select=[%s]> is invalid.\r\n"
"17=Undefined variable $%s.\r\n"
"18=The variable $%s already exists.\r\n"
"19=Named template [%s] is undefined.\r\n"
"20=The type of argument supplied to the x-path function %s is invalid.\r\n"
"21=The value of the extension-element-prefixes attribute is invalid because xmlns:%s is not defined.\r\n"
"22=%s is not a valid xml name.\r\n"
"23=The attribute set [%s] is undefined.\r\n"
"24=Sort %s %s is not supported.\r\n"
"25=Invalid attribute value template - %s.\r\n"
"26=The value of <%s %s=[%s]> is not valid.\r\n"
"27=decimal-format %s is undefined.\r\n"
"28=sort elements must be the first elements in the for-each element. \r\n"
"29=Transformation process terminated by xsl:message.\r\n"
"30=Invalid functiod %s.\r\n"
"31=Failed to open output file[%s].  Check permissions.\r\n"
"\r\n"
"[T-Script]\r\n"
"SubSystem=21\r\n"
"0=%s\r\n"
"1=Debug: bsearch out of order %s >= %s.\r\n"
"2=Syntax error.  Line: %d  Column: %d\r\n"
"3=Unexpected end of file.  Line: %d  Column: %d\r\n"
"4='%s' is undefined.  Line: %d  Column: %d\r\n"
"5='%s' has already been defined.  Line: %d  Column: %d\r\n"
"6=Parameter sub-script %d out of range.  Line: %d  Column: %d\r\n"
"7=Invalid script.\r\n"
"8=Malformed argument list - %s.\r\n"
"9=Invalid expression %s.\r\n"
"10=Function %s takes %s argument(s).  %d argument(s) were supplied.  Line: %d  Column: %d\r\n"
"11=XSL stylesheet '%s' not found.  Line: %d  Column: %d\r\n"
"12=Script '%s' not found.  Line: %d  Column: %d\r\n"
"13='%s' parameter #%d must be an integer data type.  Line: %d  Column: %d\r\n"
"14=Failed to load extension '%s'.  %s  Line: %d  Column: %d\r\n"
"15=Extension '%s' does not expose required method '%s'.  Line: %d  Column: %d\r\n"
"16='%s' not found.  Line: %d  Column: %d\r\n"
"\r\n"
"[PerlIntegration]\r\n"
"SubSystem=22\r\n"
"1=Method[%s] is described by module[%s] to require [%d] arguments, but you supplied [%d] arguments.\r\n"
"2=Unsupported datatype[%s] calling method[%s] in module[%s]\r\n"
"3=Method[%s] in module[%s] must return a String\r\n"
"4=Failed to execute [%s] in module[%s]\r\n"
"\r\n"
"[PythonIntegration]\r\n"
"SubSystem=23\r\n"
"1=Python memory allocation failed from PyList_New()\r\n"
"2=PyString_FromStringAndSize([%s],%d) failed. (Using settings from txml.txt) \r\n"
"3=Failed to set Python script path to [%s]\r\n"
"4=Unsupported native Python data conversion to [%s]\r\n"
"5=Method[%s] is described by module[%s] to require [%d] arguments, but you supplied [%d] arguments.\r\n"
"6=Failed to Compile or load module[%s] from [%s]\r\n"
"7=Method [%s] not found at a global scope in module [%s]\r\n"
"8=Global Method [%s] failed PyCallable_Check() in module [%s]\r\n"
"9=%s::%s::%s return type is not string\r\n"
"10=can't find class[%s] in module [%s]\r\n"
"11=Python internal - Py_BuildValue() failed\r\n"
"12=Can't find method[%s] in class[%s] in module[%s]\r\n"
"13=Failed to invoke method[%s] in class[%s] in module[%s]\r\n"
"14=[%s::%s] Required[%d] arguments but [%d] were supplied\r\n"
"\r\n"
"[GenericArray]\r\n"
"SubSystem=24\r\n"
"0=Array bounds exceeded.\r\n"
"1=Out of memory.\r\n"
"\r\n"
"[Cipher]\r\n"
"SubSystem=25\r\n"
"1=[%s] is not encrypyed - cannot decrypt.\r\n"
"2=Incorrect decrypt key for file [%s].\r\n"
"3=Failed to decrypt file [%s] code [%d].\r\n"
"4=Not enough memory to decrypt file [%s].\r\n"
"5=Failed to open or access[%s] - cannot decrypt.\r\n"
"6=Failed to create Cipher output file [%s].\r\n"
"7=Failed to decrypt file [%s] code [%d].\r\n"
"8=Not enough memory to encrypt file [%s].\r\n"
"9=Failed to open or access[%s] - cannot encrypt.\r\n"
"\r\n"
"[ServerCore]\r\n"
"SubSystem=26\r\n"
"1=JudgeConnection: TCP header[%s] IP not from localhost\r\n"
"2=JudgeConnection: Not within the 2 second time window[%d][%d]\r\n"
"3=JudgeConnection: Cannot verify password\r\n"
"4=JudgeConnection: Failed random memory verification\r\n"
"5=Picking up Connection [%s] on SwitchBoardServer\r\n"
"6=Waiting for a [%s] server to pick up this connection\r\n"
"7=Done Waiting ..... No connection\r\n"
"8=Done Waiting ..... Connecting\r\n"
"9=Internal Buffering Error\r\n"
"10=-- Server Too Busy\r\n"
"11=-- Server Way Too Busy\r\n"
"12=HTTP Content File [%s] requested but not found\r\n"
"13=Protocol Error. Invalid value[%d] cannot be greater than 16\r\n"
"14=Decompress failed.  Wrong password-key attempt?\r\n"
"15=protocol error - invalid block size[%d]\r\n"
"16=Wrong password-key attempt?\r\n"
"17=Protocol error. If you are attempting to proxy or 'bounce' TCP, enable RawPacketProxy=yes in the correct subsection of the config file.\r\n"
"18=ReadPacket buffer overrun.\r\n"
"19=This machine is configured to expect data with the following:\r\n"
"20=              [128 bit TwoFish Encryption]\r\n"
"21=              [256 bit TwoFish Encryption]\r\n"
"22=              [Compression Enabled]\r\n"
"23=              [Packet Synchronization Enabled]\r\n"
"24=but the actual data received had the following attributes:\r\n"
"25=Connection failed to pass judgement\r\n"
"26=Failed to read HostID packet\r\n"
"27=Info:Failed to resolve[%s].  Connection refused.\r\n"
"28=Outbound Connection to [%d:%s]----->\r\n"
"29=Failed\r\n"
"30=Connected-OK\r\n"
"31=Failed to send Local HostID verification.\r\n"
"32=Failed to forward connection-routing data.\r\n"
"33=Bad attributes header\r\n"
"34=Closed Outbound Connection to [%d:%s]\r\n"
"35=DoFileTransferPacketSend - Prep for server failed.\r\n"
"36=Timeout, Error or aborted by client[%d].\r\n"
"37=DoFileTransferPacketSend() --> Send() aborted[%d].\r\n"
"38=Modify the [FileTransfer] Timeout= value in the config file.\r\n"
"39=recv() aborted [%d] (connection closed by remote)\r\n"
"40=Timeout reading file transfer command.  Did you terminate with [CRLF] aka'\r\n'?\r\n"
"41=InitialCommandRead buffer overrun attempt.\r\n"
"42=Timeout waiting for OK after LocalGet\r\n"
"43=Listing nested directory structure[%s]\r\n"
"44=No Pickup for any [%s] on SwitchBoardServer\r\n"
"\r\n"
"[GDirectoryListing]\r\n"
"SubSystem=27\r\n"
"0=Directory [%s] does not exist or cannot be accessed OS code[%d].\r\n"
"\r\n";
