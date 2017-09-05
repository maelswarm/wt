#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *whatsThis(char *filename) {
    unsigned long k = 0;
    char *ext = malloc(1000*sizeof(char));
    for (unsigned long i=strlen(filename) - 1;; i--) {
        if (filename[i] == '.' || i == 0) {
            unsigned long j;
            if (i == 0) {
                j = 0;
            } else {
                j=i+1;
            }
            for (; j<strlen(filename); j++, k++) {
                if (isalpha(filename[j])) {
                    ext[k] = tolower(filename[j]);
                } else {
                    ext[k] = filename[j];
                }
                ext[k+1] = '\0';
            }
            break;
        }
    }
    
    if (!strcmp(ext, "a")) {
        strcpy(ext, "UNIX static library file.\n");
        return ext;
    } else if (!strcmp(ext, "asm")) {
        strcpy(ext, "Non-UNIX assembler source file.\n");
        return ext;
    } else if (!strcmp(ext, "asp")) {
        strcpy(ext, "Non-UNIX assembler source file.\n");
        return ext;
    } else if (!strcmp(ext, "avi")) {
        strcpy(ext, "Audio Video Interleave file.\n");
        return ext;
    } else if (!strcmp(ext, "awk")) {
        strcpy(ext, "An awk script file.\n");
        return ext;
    } else if (!strcmp(ext, "bat")) {
        strcpy(ext, "MS-DOS batch file.\n");
        return ext;
    } else if (!strcmp(ext, "bmp")) {
        strcpy(ext, "Bitmap image file.\n");
        return ext;
    } else if (!strcmp(ext, "btm")) {
        strcpy(ext, "4NT batch file.\n");
        return ext;
    } else if (!strcmp(ext, "c")) {
        strcpy(ext, "C language file.\n");
        return ext;
    } else if (!strcmp(ext, "class")) {
        strcpy(ext, "Compiled java source code file.\n");
        return ext;
    } else if (!strcmp(ext, "cmd")) {
        strcpy(ext, "Compiler command file.\n");
        return ext;
    } else if (!strcmp(ext, ".csv")) {
        strcpy(ext, "Compiler command file.\n");
        return ext;
    } else if (!strcmp(ext, ".cur")) {
        strcpy(ext, "Cursor image file.\n");
        return ext;
    }else if (!strcmp(ext, ".cxx")) {
        strcpy(ext, "C++ language file.\n");
        return ext;
    } else if (!strcmp(ext, ".db")) {
        strcpy(ext, "Module interface and type descriptions database file (type library).\n");
        return ext;
    } else if (!strcmp(ext, ".def")) {
        strcpy(ext, "Win32 library definition file.\n");
        return ext;
    } else if (!strcmp(ext, ".dlg")) {
        strcpy(ext, "Win32 dialog resource file.\n");
        return ext;
    } else if (!strcmp(ext, ".dll")) {
        strcpy(ext, "Win32 dynamic linked library.\n");
        return ext;
    } else if (!strcmp(ext, ".don")) {
        strcpy(ext, "Contains successful message following the execution of bmp.\n");
        return ext;
    } else if (!strcmp(ext, ".dpc")) {
        strcpy(ext, "Source dependency file containing list of dependencies.\n");
        return ext;
    } else if (!strcmp(ext, ".dpj")) {
        strcpy(ext, "Java source dependency file containing list of dependencies.\n");
        return ext;
    } else if (!strcmp(ext, ".dtd")) {
        strcpy(ext, "Document type definition file.\n");
        return ext;
    } else if (!strcmp(ext, ".dump")) {
        strcpy(ext, "Library symbols file.\n");
        return ext;
    } else if (!strcmp(ext, ".dxp")) {
        strcpy(ext, "Exports definition file.\n");
        return ext;
    } else if (!strcmp(ext, ".exe")) {
        strcpy(ext, "Win32 executable file.\n");
        return ext;
    } else if (!strcmp(ext, ".flt")) {
        strcpy(ext, "Filter file.\n");
        return ext;
    } else if (!strcmp(ext, ".flv")) {
        strcpy(ext, "Flash Video file.\n");
        return ext;
    } else if (!strcmp(ext, ".fmt")) {
        strcpy(ext, "Format file.\n");
        return ext;
    } else if (!strcmp(ext, "font")) {
        strcpy(ext, "Font file.\n");
        return ext;
    } else if (!strcmp(ext, "fp")) {
        strcpy(ext, "CDE Front Panel file.\n");
        return ext;
    }else if (!strcmp(ext, "gif")) {
        strcpy(ext, "Graphics Interchange Format file.\n");
        return ext;
    }else if (!strcmp(ext, "h")) {
        strcpy(ext, "C header file.\n");
        return ext;
    }else if (!strcmp(ext, "hdb")) {
        strcpy(ext, "Obsolete, formerly used with hedabu tool.\n");
        return ext;
    }else if (!strcmp(ext, "hdl")) {
        strcpy(ext, "Generated C header or header declaration file.\n");
        return ext;
    }else if (!strcmp(ext, "hid")) {
        strcpy(ext, "Help ID file.\n");
        return ext;
    }else if (!strcmp(ext, "hpp")) {
        strcpy(ext, "Generated C++ header or header plus plus file.\n");
        return ext;
    }else if (!strcmp(ext, "hrc")) {
        strcpy(ext, "An .src include header file.\n");
        return ext;
    }else if (!strcmp(ext, "html")) {
        strcpy(ext, "Hypertext markup language file.\n");
        return ext;
    }else if (!strcmp(ext, "hxx")) {
        strcpy(ext, "C++ header file.\n");
        return ext;
    }else if (!strcmp(ext, "ico")) {
        strcpy(ext, "Icon file.\n");
        return ext;
    }else if (!strcmp(ext, "idl")) {
        strcpy(ext, "Component interface description (Interface Definition Language).\n");
        return ext;
    }else if (!strcmp(ext, "ilb")) {
        strcpy(ext, "Intermediate StarOffice interface definition file.\n");
        return ext;
    }else if (!strcmp(ext, "inc")) {
        strcpy(ext, "Include file.\n");
        return ext;
    }else if (!strcmp(ext, "inf")) {
        strcpy(ext, "Installation file.\n");
        return ext;
    }else if (!strcmp(ext, "ini")) {
        strcpy(ext, "Initialization file.\n");
        return ext;
    }else if (!strcmp(ext, "inl")) {
        strcpy(ext, "Inline header file.\n");
        return ext;
    }else if (!strcmp(ext, "ins")) {
        strcpy(ext, "Installation configuration file.\n");
        return ext;
    }else if (!strcmp(ext, "java")) {
        strcpy(ext, "Java language file.\n");
        return ext;
    }else if (!strcmp(ext, "jar")) {
        strcpy(ext, "Java classes archive file.\n");
        return ext;
    }else if (!strcmp(ext, "jnl")) {
        strcpy(ext, "CVS journal file.\n");
        return ext;
    }else if (!strcmp(ext, "jpg")) {
        strcpy(ext, "Bitmap graphics (Joint Photography Experts Group).\n");
        return ext;
    }else if (!strcmp(ext, "js")) {
        strcpy(ext, "JavaScript code file.\n");
        return ext;
    }else if (!strcmp(ext, "jsp")) {
        strcpy(ext, "Java Server Page file.\n");
        return ext;
    }else if (!strcmp(ext, "kdelnk")) {
        strcpy(ext, "KDE1 configuration file.\n");
        return ext;
    }else if (!strcmp(ext, "l")) {
        strcpy(ext, "Lex source code file.\n");
        return ext;
    }else if (!strcmp(ext, "lib")) {
        strcpy(ext, "In UNIX systems, a list of objects. In Win32 systems, a collection of objects.\n");
        return ext;
    }else if (!strcmp(ext, "lin")) {
        strcpy(ext, "Incremental linking file.\n");
        return ext;
    }else if (!strcmp(ext, "ll")) {
        strcpy(ext, "Lex source code file.\n");
        return ext;
    }else if (!strcmp(ext, "lng")) {
        strcpy(ext, "File containing string and message definitions for the setup program.\n");
        return ext;
    }else if (!strcmp(ext, "lnk")) {
        strcpy(ext, "Linker response file.\n");
        return ext;
    }else if (!strcmp(ext, "lnx")) {
        strcpy(ext, "Linux-specific makefile.\n");
        return ext;
    }else if (!strcmp(ext, "log")) {
        strcpy(ext, "Log file.\n");
        return ext;
    }else if (!strcmp(ext, "lst")) {
        strcpy(ext, "ASCII database file used in solenv.\n");
        return ext;
    }else if (!strcmp(ext, "m4v")) {
        strcpy(ext, "File format for videos for iPods and PlayStation Portables developed by Apple.\n");
        return ext;
    }else if (!strcmp(ext, "mac")) {
        strcpy(ext, "Macintosh-specific makefile. This is now obsolete.\n");
        return ext;
    }else if (!strcmp(ext, "map")) {
        strcpy(ext, "Library map file.\n");
        return ext;
    }else if (!strcmp(ext, "mk")) {
        strcpy(ext, "A dmake makefile.\n");
        return ext;
    }else if (!strcmp(ext, "mkv")) {
        strcpy(ext, "Matroska Multimedia Container file.\n");
        return ext;
    }else if (!strcmp(ext, "mod")) {
        strcpy(ext, "BASIC module file.\n");
        return ext;
    }else if (!strcmp(ext, "mov") || !strcmp(ext, "qt")) {
        strcpy(ext, "Quicktime file.\n");
        return ext;
    }else if (!strcmp(ext, "mp4") || !strcmp(ext, "m4p") || !strcmp(ext, "m4v")) {
        strcpy(ext, "Motion Picture Experts Group Part 14 file.\n");
        return ext;
    }else if (!strcmp(ext, "mpg") || !strcmp(ext, "mp2") || !strcmp(ext, "mpeg") || !strcmp(ext, "mpe") || !strcmp(ext, "mpv") || !strcmp(ext, "m2v")) {
        strcpy(ext, "Motion Picture Experts Group file.\n");
        return ext;
    }else if (!strcmp(ext, "o")) {
        strcpy(ext, "UNIX object file.\n");
        return ext;
    }else if (!strcmp(ext, "obj")) {
        strcpy(ext, "Win32 object file.\n");
        return ext;
    }else if (!strcmp(ext, "par")) {
        strcpy(ext, "Script particles file.\n");
        return ext;
    }else if (!strcmp(ext, "pfa")) {
        strcpy(ext, "Type 3 font file.\n");
        return ext;
    } else if (!strcmp(ext, "pfb")) {
        strcpy(ext, "Type 1 font file.\n");
        return ext;
    }else if (!strcmp(ext, "pl")) {
        strcpy(ext, "Perl script.\n");
        return ext;
    }else if (!strcmp(ext, "plc")) {
        strcpy(ext, "Former build script file, now obsolete.\n");
        return ext;
    }else if (!strcmp(ext, "pld")) {
        strcpy(ext, "Former build script file, now obsolete.\n");
        return ext;
    }else if (!strcmp(ext, "pm")) {
        strcpy(ext, "Perl module file.\n");
        return ext;
    }else if (!strcmp(ext, "pmk")) {
        strcpy(ext, "Project makefiles.\n");
        return ext;
    }else if (!strcmp(ext, "pre")) {
        strcpy(ext, "Preprocessor output from scpcomp.\n");
        return ext;
    }else if (!strcmp(ext, "ps")) {
        strcpy(ext, "PostScript file.\n");
        return ext;
    }else if (!strcmp(ext, "ptr")) {
        strcpy(ext, "Mouse pointer file.\n");
        return ext;
    }else if (!strcmp(ext, "r")) {
        strcpy(ext, "Resource file for Macintosh.\n");
        return ext;
    }else if (!strcmp(ext, "rc")) {
        strcpy(ext, "A dmake recursive makefile or a Win32 resource script file.\n");
        return ext;
    }else if (!strcmp(ext, "rdb")) {
        strcpy(ext, "Interface and type description database (type library).\n");
        return ext;
    }else if (!strcmp(ext, "res")) {
        strcpy(ext, "Resource file.\n");
        return ext;
    }else if (!strcmp(ext, "s")) {
        strcpy(ext, "Assembler source file (UNIX).\n");
        return ext;
    }else if (!strcmp(ext, "sbl")) {
        strcpy(ext, "BASIC file.\n");
        return ext;
    }else if (!strcmp(ext, "scp")) {
        strcpy(ext, "Script source file.\n");
        return ext;
    }else if (!strcmp(ext, "scr")) {
        strcpy(ext, "Windows screen saver executable file.\n");
        return ext;
    }else if (!strcmp(ext, "sda")) {
        strcpy(ext, "Draw application document.\n");
        return ext;
    }else if (!strcmp(ext, "sdb")) {
        strcpy(ext, "Base application document.\n");
        return ext;
    }else if (!strcmp(ext, "sdc")) {
        strcpy(ext, "Calc application document.\n");
        return ext;
    }else if (!strcmp(ext, "sdd")) {
        strcpy(ext, "Impress application document.\n");
        return ext;
    }else if (!strcmp(ext, "sdg")) {
        strcpy(ext, "Storage file for Gallery.\n");
        return ext;
    }else if (!strcmp(ext, "sdm")) {
        strcpy(ext, "Mail message.\n");
        return ext;
    }else if (!strcmp(ext, "sds")) {
        strcpy(ext, "Chart application document.\n");
        return ext;
    }else if (!strcmp(ext, "sdv")) {
        strcpy(ext, "Gallery storage file.\n");
        return ext;
    }else if (!strcmp(ext, "sdw")) {
        strcpy(ext, "Writer application document.\n");
        return ext;
    }else if (!strcmp(ext, "sdi")) {
        strcpy(ext, "Interface definition file.\n");
        return ext;
    }else if (!strcmp(ext, "seg")) {
        strcpy(ext, "Function ordering instructions for Microsoft linker.\n");
        return ext;
    }else if (!strcmp(ext, "sgl")) {
        strcpy(ext, "Writer master document file.\n");
        return ext;
    }else if (!strcmp(ext, "sh")) {
        strcpy(ext, "Shell script.\n");
        return ext;
    }else if (!strcmp(ext, "sid")) {
        strcpy(ext, "Slot id file.\n");
        return ext;
    }else if (!strcmp(ext, "smf")) {
        strcpy(ext, "Math application formula document.\n");
        return ext;
    }else if (!strcmp(ext, "sms")) {
        strcpy(ext, "Math application formula document template.\n");
        return ext;
    }else if (!strcmp(ext, "so")) {
        strcpy(ext, "UNIX dynamic shared library\n");
        return ext;
    }else if (!strcmp(ext, "sob")) {
        strcpy(ext, "Bitmap styles.\n");
        return ext;
    }else if (!strcmp(ext, "soc")) {
        strcpy(ext, "Color palettes.\n");
        return ext;
    }else if (!strcmp(ext, "sod")) {
        strcpy(ext, "Line styles.\n");
        return ext;
    }else if (!strcmp(ext, "soe")) {
        strcpy(ext, "Arrow styles.\n");
        return ext;
    }else if (!strcmp(ext, "sog")) {
        strcpy(ext, "Gradients.\n");
        return ext;
    }else if (!strcmp(ext, "soh")) {
        strcpy(ext, "Hatches.\n");
        return ext;
    }else if (!strcmp(ext, "src")) {
        strcpy(ext, "Source resource string file.\n");
        return ext;
    }else if (!strcmp(ext, "srs")) {
        strcpy(ext, "Screen resource string file.\n");
        return ext;
    }else if (!strcmp(ext, "tfm")) {
        strcpy(ext, "Tagged Font Metric file.\n");
        return ext;
    }else if (!strcmp(ext, "thm")) {
        strcpy(ext, "Storage file for Gallery.\n");
        return ext;
    }else if (!strcmp(ext, "ttf")) {
        strcpy(ext, "TrueType font file.\n");
        return ext;
    }else if (!strcmp(ext, "TTF")) {
        strcpy(ext, "TrueType font file.\n");
        return ext;
    }else if (!strcmp(ext, "txt")) {
        strcpy(ext, "Language text file.\n");
        return ext;
    }else if (!strcmp(ext, "unx")) {
        strcpy(ext, "UNIX-specific makefile. This is now obsolete.\n");
        return ext;
    }else if (!strcmp(ext, "urd")) {
        strcpy(ext, "From an IDL-generated relational database (Uno Reflection Data).\n");
        return ext;
    }else if (!strcmp(ext, "url")) {
        strcpy(ext, "Uniform Resource Locator file.\n");
        return ext;
    }else if (!strcmp(ext, "vor")) {
        strcpy(ext, "Writer document template.\n");
        return ext;
    }else if (!strcmp(ext, "w32")) {
        strcpy(ext, "Partly native Windows makefile..\n");
        return ext;
    }else if (!strcmp(ext, "wav")) {
        strcpy(ext, "Waveform audio file.\n");
        return ext;
    }else if (!strcmp(ext, "wmf")) {
        strcpy(ext, "Win32 metafile vector graphics file.\n");
        return ext;
    }else if (!strcmp(ext, "wmv")) {
        strcpy(ext, "Windows Media Video file.\n");
        return ext;
    }else if (!strcmp(ext, "xml")) {
        strcpy(ext, "Extensible Markup Language file.\n");
        return ext;
    }else if (!strcmp(ext, "xpm")) {
        strcpy(ext, "X11 pixel map graphics file.\n");
        return ext;
    }else if (!strcmp(ext, "xrb")) {
        strcpy(ext, "XML format file to generate Java properties in language translation.\n");
        return ext;
    }else if (!strcmp(ext, "y")) {
        strcpy(ext, "Yacc source code file.\n");
        return ext;
    }else if (!strcmp(ext, "yxx")) {
        strcpy(ext, "Bison source code file.\n");
        return ext;
    }else if (!strcmp(ext, "zip")) {
        strcpy(ext, "Zip file.\n");
        return ext;
    }
    
    strcpy(ext, "Unknown Filetype\n");
    return ext;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    if (argc != 2) {
        printf("Please have a file as the only argument.\n");
        return 1;
    }
    
    char *desc = whatsThis(argv[1]);
    printf("%s: %s", argv[1], desc);
    free(desc);
    return 0;
}
