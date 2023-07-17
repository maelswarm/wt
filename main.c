#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *trim(char *str)
{
    size_t len = 0;
    char *frontp = str;
    char *endp = NULL;

    if (str == NULL)
    {
        return NULL;
    }
    if (str[0] == '\0')
    {
        return str;
    }

    len = strlen(str);
    endp = str + len;

    while (isspace((unsigned char)*frontp))
    {
        ++frontp;
    }
    if (endp != frontp)
    {
        while (isspace((unsigned char)*(--endp)) && endp != frontp)
        {
        }
    }

    if (frontp != str && endp == frontp)
        *str = '\0';
    else if (str + len - 1 != endp)
        *(endp + 1) = '\0';

    endp = str;
    if (frontp != str)
    {
        while (*frontp)
        {
            *endp++ = *frontp++;
        }
        *endp = '\0';
    }

    return str;
}

char *normalizeExt(char *str)
{
    unsigned long k = 0;
    char *ext = malloc(1000 * sizeof(char));
    for (unsigned long i = strlen(str) - 1;; i--)
    {
        if (str[i] == '.' || i == 0)
        {
            unsigned long j;
            if (str[i] == '.')
            {
                j = i + 1;
            }
            else if(i == 0) 
            {
                j = 0;
            }
            for (; j < strlen(str); j++, k++)
            {
                if (isalpha(str[j]))
                {
                    ext[k] = tolower(str[j]);
                }
                else
                {
                    ext[k] = str[j];
                }
                ext[k + 1] = '\0';
            }
            break;
        }
    }
    return ext;
}

int strcmpm(char *a, char *b)
{
    char bb[1000];
    memset(bb, '\0', 1000);
    strcpy(bb, b);
    char *token = strtok(bb, ",");
    if (token == NULL)
    {
        if (strcmp(a, b) == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        while (token != NULL)
        {
            token = trim(normalizeExt(token));
            if (strcmp(a, token) == 0)
            {
                return 1;
            }
            token = strtok(NULL, ",");
        }
    }
    return 0;
}

char *whatsThis(char *filename)
{
    char *ext = normalizeExt(filename);
printf(ext);
    if (strcmpm(ext, ".?Q?"))
    {
        strcpy(ext, "files that are compressed, often by the SQ program.");
        return ext;
    }
    else if (strcmpm(ext, "7z"))
    {
        strcpy(ext, "7z: 7-Zip compressed file");
        return ext;
    }

    else if (strcmpm(ext, "A"))
    {
        strcpy(ext, "An external file extension for C/C++");
        return ext;
    }

    else if (strcmpm(ext, "AAC"))
    {
        strcpy(ext, "Advanced Audio Coding");
        return ext;
    }

    else if (strcmpm(ext, "ace"))
    {
        strcpy(ext, "ace: ACE compressed file");
        return ext;
    }

    else if (strcmpm(ext, "ALZ"))
    {
        strcpy(ext, "ALZip compressed file");
        return ext;
    }

    else if (strcmpm(ext, "APK"))
    {
        strcpy(ext, "Android package: Applications installable on Android; package format of the Alpine Linux distribution");
        return ext;
    }

    else if (strcmpm(ext, "APPX"))
    {
        strcpy(ext, "Microsoft Application Package (.appx)");
        return ext;
    }

    else if (strcmpm(ext, "AT3"))
    {
        strcpy(ext, "Sony's UMD data compression");
        return ext;
    }

    else if (strcmpm(ext, "ARC"))
    {
        strcpy(ext, "ARC: pre-Zip data compression");
        return ext;
    }

    else if (strcmpm(ext, "ARC"))
    {
        strcpy(ext, "Nintendo U8 Archive (mostly Yaz0 compressed)");
        return ext;
    }

    else if (strcmpm(ext, "ARJ"))
    {
        strcpy(ext, "ARJ compressed file");
        return ext;
    }

    else if (strcmpm(ext, "ASS, SSA"))
    {
        strcpy(ext, "ASS (also SSA): a subtitles file created by Aegisub, a video typesetting application (also a Halo game engine file)");
        return ext;
    }

    else if (strcmpm(ext, "B"))
    {
        strcpy(ext, "(B file) Similar to .a, but less compressed.");
        return ext;
    }

    else if (strcmpm(ext, "BA"))
    {
        strcpy(ext, "BA: Scifer Archive (.ba), Scifer External Archive Type");
        return ext;
    }

    else if (strcmpm(ext, "BIN"))
    {
        strcpy(ext, "compressed archive, can be read and used by CD-ROMs and Java, extractable by 7-zip and WINRAR");
        return ext;
    }

    else if (strcmpm(ext, ".bkf"))
    {
        strcpy(ext, "Microsoft backup created by NTBackup.c");
        return ext;
    }

    else if (strcmpm(ext, "Blend"))
    {
        strcpy(ext, "An external 3D file format used by the animation software, Blender.");
        return ext;
    }

    else if (strcmpm(ext, ".bz2"))
    {
        strcpy(ext, "bzip2");
        return ext;
    }

    else if (strcmpm(ext, "BMP"))
    {
        strcpy(ext, "Bitmap Image - You can create one by right-clicking the home screen, next, click new, then, click Bitmap Image");
        return ext;
    }

    else if (strcmpm(ext, "cab"))
    {
        strcpy(ext, "A cabinet (.cab) file is a library of compressed files stored as one file. Cabinet files are used to organize installation files that are copied to the user's system.[2]");
        return ext;
    }

    else if (strcmpm(ext, "c4"))
    {
        strcpy(ext, "JEDMICS image files, a DOD system");
        return ext;
    }

    else if (strcmpm(ext, "cals"))
    {
        strcpy(ext, "JEDMICS image files, a DOD system");
        return ext;
    }

    else if (strcmpm(ext, "xaml"))
    {
        strcpy(ext, "Used in programs like Visual Studio to create exe files.");
        return ext;
    }

    else if (strcmpm(ext, "CPT, SEA"))
    {
        strcpy(ext, "Compact Pro (Macintosh)");
        return ext;
    }

    else if (strcmpm(ext, "DAA"))
    {
        strcpy(ext, "DAA: Closed-format, Windows-only compressed disk image");
        return ext;
    }

    else if (strcmpm(ext, "deb"))
    {
        strcpy(ext, "deb: Debian install package");
        return ext;
    }

    else if (strcmpm(ext, "DMG"))
    {
        strcpy(ext, "an Apple compressed/encrypted format");
        return ext;
    }

    else if (strcmpm(ext, "DDZ"))
    {
        strcpy(ext, "a file which can only be used by the 'daydreamer engine' created by 'fever-dreamer', a program similar to RAGS, it's mainly used to make somewhat short games.");
        return ext;
    }

    else if (strcmpm(ext, "DN"))
    {
        strcpy(ext, "Adobe Dimension CC file format");
        return ext;
    }

    else if (strcmpm(ext, "DNG"))
    {
        strcpy(ext, "'Digital Negative' a type of raw image file format used in digital photography.");
        return ext;
    }

    else if (strcmpm(ext, "DPE"))
    {
        strcpy(ext, "Package of AVE documents made with Aquafadas digital publishing tools.");
        return ext;
    }

    else if (strcmpm(ext, ".egg"))
    {
        strcpy(ext, "Alzip Egg Edition compressed file");
        return ext;
    }

    else if (strcmpm(ext, ".egt"))
    {
        strcpy(ext, "EGT Universal Document also used to create compressed cabinet files replaces .ecab");
        return ext;
    }

    else if (strcmpm(ext, ".ECAB, .ezip"))
    {
        strcpy(ext, "EGT Compressed Folder used in advanced systems to compress entire system folders, replaced by EGT Universal Document");
        return ext;
    }

    else if (strcmpm(ext, "ESD"))
    {
        strcpy(ext, "ESD: Electronic Software Distribution, a compressed and encrypted WIM File");
        return ext;
    }

    else if (strcmpm(ext, ".ess"))
    {
        strcpy(ext, "EGT SmartSense File, detects files compressed using the EGT compression system.");
        return ext;
    }

    else if (strcmpm(ext, ".exe"))
    {
        strcpy(ext, "Windows application");
        return ext;
    }

    else if (strcmpm(ext, ".flipchart"))
    {
        strcpy(ext, "Used in Promethean ActivInspire Flipchart Software.");
        return ext;
    }

    else if (strcmpm(ext, ".fun"))
    {
        strcpy(ext, "A FUN file is a file that has been encrypted by Jigsaw ransomware, which is malware distributed by cybercriminals. It contains a file, such as a .JPG, .DOCX, .XLSX, .MP4, or .CSV file, that has been renamed and encrypted by the virus.");
        return ext;
    }

    else if (strcmpm(ext, ".gbs, .ggp, .gsc"))
    {
        strcpy(ext, "GBS OtterUI binary scene file");
        return ext;
    }

    else if (strcmpm(ext, ".gho, .ghs"))
    {
        strcpy(ext, "GHO Norton Ghost");
        return ext;
    }

    else if (strcmpm(ext, ".gif"))
    {
        strcpy(ext, "GIF Graphics Interchange Format");
        return ext;
    }

    else if (strcmpm(ext, ".gz"))
    {
        strcpy(ext, "gzip Compressed file");
        return ext;
    }

    else if (strcmpm(ext, ".html"))
    {
        strcpy(ext, "HTML code file");
        return ext;
    }

    else if (strcmpm(ext, ".ipg"))
    {
        strcpy(ext, "Format in which Apple Inc. packages their iPod games. can be extracted through Winrar");
        return ext;
    }

    else if (strcmpm(ext, "jar"))
    {
        strcpy(ext, "jar ZIP file with manifest for use with Java applications.");
        return ext;
    }

    else if (strcmpm(ext, "JPG"))
    {
        strcpy(ext, "Joints Photographic Experts Group - Image File");
        return ext;
    }

    else if (strcmpm(ext, "JPEG"))
    {
        strcpy(ext, "Joints Photographic Experts Group - Image File");
        return ext;
    }

    else if (strcmpm(ext, ".Lawrence"))
    {
        strcpy(ext, "LBR Lawrence Compiler Type file");
        return ext;
    }

    else if (strcmpm(ext, "LBR"))
    {
        strcpy(ext, "LBR Library file");
        return ext;
    }

    else if (strcmpm(ext, "LQR"))
    {
        strcpy(ext, "LQR LBR Library file compressed by the SQ program.");
        return ext;
    }

    else if (strcmpm(ext, ".lzh"))
    {
        strcpy(ext, "LHA Lempel, Ziv, Huffman");
        return ext;
    }

    else if (strcmpm(ext, ".lz"))
    {
        strcpy(ext, "lzip Compressed file");
        return ext;
    }

    else if (strcmpm(ext, ".lzo"))
    {
        strcpy(ext, "lzo");
        return ext;
    }

    else if (strcmpm(ext, "lzma"))
    {
        strcpy(ext, "lzma Lempel-Ziv-Markov chain algorithm compressed file");
        return ext;
    }

    else if (strcmpm(ext, "LZX"))
    {
        strcpy(ext, "LZX");
        return ext;
    }

    else if (strcmpm(ext, ".lua"))
    {
        strcpy(ext, "Lua");
        return ext;
    }

    else if (strcmpm(ext, ".mbw"))
    {
        strcpy(ext, "MBRWizard archive");
        return ext;
    }

    else if (strcmpm(ext, "MHTML"))
    {
        strcpy(ext, "Mime HTML (Hyper-Text Markup Language) code file");
        return ext;
    }

    else if (strcmpm(ext, ".midi"))
    {
        strcpy(ext, "Musical Instrument Digital Interface");
        return ext;
    }

    else if (strcmpm(ext, ".mpq"))
    {
        strcpy(ext, "MPQ Archives Used by Blizzard Entertainment");
        return ext;
    }

    else if (strcmpm(ext, ".bin"))
    {
        strcpy(ext, "BIN MacBinary");
        return ext;
    }

    else if (strcmpm(ext, ".nl2pkg"))
    {
        strcpy(ext, "NoLimits 2 Package");
        return ext;
    }

    else if (strcmpm(ext, ".nth"))
    {
        strcpy(ext, "NTH: Nokia Theme Used by Nokia Series 40 Cellphones");
        return ext;
    }

    else if (strcmpm(ext, ".oar"))
    {
        strcpy(ext, "OAR: OAR archive");
        return ext;
    }

    else if (strcmpm(ext, "OSG"))
    {
        strcpy(ext, "Compressed osu! live gameplay archive (optimized for spectating)");
        return ext;
    }

    else if (strcmpm(ext, "OSK"))
    {
        strcpy(ext, "Compressed osu! skin archive");
        return ext;
    }

    else if (strcmpm(ext, "OSR"))
    {
        strcpy(ext, "Compressed osu! replay archive");
        return ext;
    }

    else if (strcmpm(ext, "OSZ"))
    {
        strcpy(ext, "Compressed osu! beatmap archive");
        return ext;
    }

    else if (strcmpm(ext, "PAK"))
    {
        strcpy(ext, "Enhanced type of .ARC archive");
        return ext;
    }

    else if (strcmpm(ext, ".par, .par2"))
    {
        strcpy(ext, "PAR Parchive");
        return ext;
    }

    else if (strcmpm(ext, ".paf"))
    {
        strcpy(ext, "PAF Portable Application File");
        return ext;
    }

    else if (strcmpm(ext, ".pea"))
    {
        strcpy(ext, "PEA PeaZip archive file");
        return ext;
    }

    else if (strcmpm(ext, "PNG"))
    {
        strcpy(ext, "Portable Network Graphic Image File");
        return ext;
    }

    else if (strcmpm(ext, "Webp"))
    {
        strcpy(ext, "Raster image format developed by Google for web graphics");
        return ext;
    }

    else if (strcmpm(ext, ".php"))
    {
        strcpy(ext, "PHP code file");
        return ext;
    }

    else if (strcmpm(ext, ".pyk"))
    {
        strcpy(ext, "PYK Compressed file");
        return ext;
    }

    else if (strcmpm(ext, ".pk3"))
    {
        strcpy(ext, "PK3 Quake 3 archive (See note on Doom³)");
        return ext;
    }

    else if (strcmpm(ext, ".pk4"))
    {
        strcpy(ext, "PK4 Doom³ archive (Opens similarly to a zip archive.)");
        return ext;
    }

    else if (strcmpm(ext, ".pnj"))
    {
        strcpy(ext, ".pnj - sub-format of the MNG file format, used for encapsulating JPEG files[3]");
        return ext;
    }

    else if (strcmpm(ext, ".pxz"))
    {
        strcpy(ext, "PXZ A compressed layered image file used for the image editing website, pixlr.com .");
        return ext;
    }

    else if (strcmpm(ext, "py, pyw"))
    {
        strcpy(ext, "Python code file");
        return ext;
    }

    else if (strcmpm(ext, ".rar"))
    {
        strcpy(ext, "RAR Rar Archive, for multiple file archive (rar to .r01-.r99 to s01 and so on)");
        return ext;
    }

    else if (strcmpm(ext, "RAG, RAGS"))
    {
        strcpy(ext, "Game file, a game playable in the RAGS game-engine, a free program which both allows people to create games, and play games, games created have the format 'RAG game file'");
        return ext;
    }

    else if (strcmpm(ext, "RaX"))
    {
        strcpy(ext, "Archive file created by RaX");
        return ext;
    }

    else if (strcmpm(ext, "RBXL"))
    {
        strcpy(ext, "Roblox Studio place file (XML, binary)");
        return ext;
    }

    else if (strcmpm(ext, "RBXLX"))
    {
        strcpy(ext, "Roblox Studio place file (exclusively XML)");
        return ext;
    }

    else if (strcmpm(ext, "RBXM"))
    {
        strcpy(ext, "Roblox Studio model file (XML, binary)");
        return ext;
    }

    else if (strcmpm(ext, "RBXMX"))
    {
        strcpy(ext, "Roblox Studio model file (exclusively XML)");
        return ext;
    }

    else if (strcmpm(ext, "RPM"))
    {
        strcpy(ext, "Red Hat package/installer for Fedora, RHEL, and similar systems.");
        return ext;
    }

    else if (strcmpm(ext, "sb"))
    {
        strcpy(ext, "Scratch file");
        return ext;
    }

    else if (strcmpm(ext, "sb2"))
    {
        strcpy(ext, "Scratch 2.0 file");
        return ext;
    }

    else if (strcmpm(ext, "sb3"))
    {
        strcpy(ext, "Scratch 3.0 file");
        return ext;
    }

    else if (strcmpm(ext, "SEN"))
    {
        strcpy(ext, "Scifer Archive (.sen) - Scifer Internal Archive Type");
        return ext;
    }

    else if (strcmpm(ext, ".sitx"))
    {
        strcpy(ext, "SIT StuffIt (Macintosh)");
        return ext;
    }

    else if (strcmpm(ext, "SIS, SISX"))
    {
        strcpy(ext, "SIS/SISX: Symbian Application Package");
        return ext;
    }

    else if (strcmpm(ext, "SKB"))
    {
        strcpy(ext, "Google SketchUp backup File");
        return ext;
    }

    else if (strcmpm(ext, ".sq"))
    {
        strcpy(ext, "SQ: Squish Compressed Archive");
        return ext;
    }

    else if (strcmpm(ext, ".srt"))
    {
        strcpy(ext, "SubRip Subtitle - file format for closed captioning or subtitles.");
        return ext;
    }

    else if (strcmpm(ext, "SWM"))
    {
        strcpy(ext, "Splitted WIM File, usually found on OEM Recovery Partition to store preinstalled Windows image, and to make Recovery backup (to USB Drive) easier (due to FAT32 limitations)");
        return ext;
    }

    else if (strcmpm(ext, "SZS"))
    {
        strcpy(ext, "Nintendo Yaz0 Compressed Archive");
        return ext;
    }

    else if (strcmpm(ext, "TAR"))
    {
        strcpy(ext, "TAR: group of files, packaged as one file");
        return ext;
    }

    else if (strcmpm(ext, "Gzip, .tar.gz"))
    {
        strcpy(ext, "(Gzip, .tar.gz): TGZ gzipped tar file");
        return ext;
    }

    else if (strcmpm(ext, ".tb"))
    {
        strcpy(ext, "TB Tabbery Virtual Desktop Tab file");
        return ext;
    }

    else if (strcmpm(ext, ".tib"))
    {
        strcpy(ext, "TIB Acronis True Image backup");
        return ext;
    }

    else if (strcmpm(ext, "UHA"))
    {
        strcpy(ext, "Ultra High Archive Compression");
        return ext;
    }

    else if (strcmpm(ext, ".uue"))
    {
        strcpy(ext, "UUE unified utility engine - the generic and default format for all things UUe-related.");
        return ext;
    }

    else if (strcmpm(ext, "uf2"))
    {
        strcpy(ext, "uf2 Microsoft makecode arcade game.");
        return ext;
    }

    else if (strcmpm(ext, "VIV"))
    {
        strcpy(ext, "Archive format used to compress data for several video games, including Need For Speed: High Stakes.");
        return ext;
    }

    else if (strcmpm(ext, "VOL"))
    {
        strcpy(ext, "video game data package.");
        return ext;
    }

    else if (strcmpm(ext, "VSA"))
    {
        strcpy(ext, "Altiris Virtual Software Archive");
        return ext;
    }

    else if (strcmpm(ext, "WAX"))
    {
        strcpy(ext, "Wavexpress - A ZIP alternative optimized for packages containing video, allowing multiple packaged files to be all-or-none delivered with near-instantaneous unpacking via NTFS file system manipulation.");
        return ext;
    }

    else if (strcmpm(ext, ".wfp"))
    {
        strcpy(ext, ".wfp a Wondershare Flimora project file");
        return ext;
    }

    else if (strcmpm(ext, "WIM"))
    {
        strcpy(ext, "WIM A compressed disk image for installing Windows Vista or higher, Windows Fundamentals for Legacy PC, or restoring a system image made from Backup and Restore (Windows Vista/7)");
        return ext;
    }

    else if (strcmpm(ext, "XAP"))
    {
        strcpy(ext, "Windows Phone Application Package");
        return ext;
    }

    else if (strcmpm(ext, "xz"))
    {
        strcpy(ext, "xz compressed files, based on LZMA/LZMA2 algorithm");
        return ext;
    }

    else if (strcmpm(ext, "Z"))
    {
        strcpy(ext, "Unix compress file");
        return ext;
    }

    else if (strcmpm(ext, "zoo"))
    {
        strcpy(ext, "zoo: based on LZW");
        return ext;
    }

    else if (strcmpm(ext, "zip"))
    {
        strcpy(ext, "zip: popular compression format");
        return ext;
    }

    else if (strcmpm(ext, "ZIM"))
    {
        strcpy(ext, "ZIM: an open file format that stores wiki content for offline usage");
        return ext;
    }

    else if (strcmpm(ext, "ISO"))
    {
        strcpy(ext, "Generic format for most optical media, including CD-ROM, DVD-ROM, Blu-ray, HD DVD and UMD.");
        return ext;
    }

    else if (strcmpm(ext, "NRG"))
    {
        strcpy(ext, "Proprietary optical media archive format used by Nero applications.");
        return ext;
    }

    else if (strcmpm(ext, "IMG"))
    {
        strcpy(ext, "Raw disk image, for archiving DOS formatted floppy disks, hard drives, and larger optical media.");
        return ext;
    }

    else if (strcmpm(ext, "ADF"))
    {
        strcpy(ext, "for archiving Amiga floppy disks");
        return ext;
    }

    else if (strcmpm(ext, "ADZ"))
    {
        strcpy(ext, "The GZip-compressed version of ADF.");
        return ext;
    }

    else if (strcmpm(ext, "DMS"))
    {
        strcpy(ext, "a disk-archiving system native to the Amiga.");
        return ext;
    }

    else if (strcmpm(ext, "DSK"))
    {
        strcpy(ext, "For archiving floppy disks from a number of other platforms, including the ZX Spectrum and Amstrad CPC.");
        return ext;
    }

    else if (strcmpm(ext, "D64"))
    {
        strcpy(ext, "An archive of a Commodore 64 floppy disk.");
        return ext;
    }

    else if (strcmpm(ext, "SDI"))
    {
        strcpy(ext, "used for archiving and providing 'virtual disk' functionality.");
        return ext;
    }

    else if (strcmpm(ext, "MDS"))
    {
        strcpy(ext, "Daemon Tools native disc image format used for making images from optical CD-ROM, DVD-ROM, HD DVD or Blu-ray. It comes together with MDF file and can be mounted with DAEMON Tools.");
        return ext;
    }

    else if (strcmpm(ext, "MDX"))
    {
        strcpy(ext, "Daemon Tools format that allows getting one MDX disc image file instead of two (MDF and MDS).");
        return ext;
    }

    else if (strcmpm(ext, "DMG"))
    {
        strcpy(ext, "Macintosh disk image files");
        return ext;
    }

    else if (strcmpm(ext, "CDI"))
    {
        strcpy(ext, "DiscJuggler image file");
        return ext;
    }

    else if (strcmpm(ext, "CUE"))
    {
        strcpy(ext, "CDRWrite CUE image file");
        return ext;
    }

    else if (strcmpm(ext, "CIF"))
    {
        strcpy(ext, "Easy CD Creator .cif format");
        return ext;
    }

    else if (strcmpm(ext, "C2D"))
    {
        strcpy(ext, "Roxio-WinOnCD .c2d format");
        return ext;
    }

    else if (strcmpm(ext, "DAA"))
    {
        strcpy(ext, "PowerISO .daa format");
        return ext;
    }

    else if (strcmpm(ext, "B6T"))
    {
        strcpy(ext, "BlindWrite 6 image file");
        return ext;
    }

    else if (strcmpm(ext, "B5T"))
    {
        strcpy(ext, "BlindWrite 5 image file");
        return ext;
    }

    else if (strcmpm(ext, "BWT"))
    {
        strcpy(ext, "BlindWrite 4 image file");
        return ext;
    }

    else if (strcmpm(ext, "FFPPKG"))
    {
        strcpy(ext, "FreeFire Profile Export Package");
        return ext;
    }

    else if (strcmpm(ext, "LEMONAPP"))
    {
        strcpy(ext, "LemonOS/LemonTabOS/LemonRoid App (.lem_app)");
        return ext;
    }

    else if (strcmpm(ext, "HTML"))
    {
        strcpy(ext, "Hypertext Markup Language");
        return ext;
    }

    else if (strcmpm(ext, "Msi"))
    {
        strcpy(ext, "Windows installation file");
        return ext;
    }

    else if (strcmpm(ext, "Vdhx"))
    {
        strcpy(ext, "Virtual disk created by Hyper-V (Hyper-V runs on windows operating system)");
        return ext;
    }

    else if (strcmpm(ext, "3DXML"))
    {
        strcpy(ext, "Dassault Systemes graphic representation");
        return ext;
    }

    else if (strcmpm(ext, "3MF"))
    {
        strcpy(ext, "Microsoft 3D Manufacturing Format[4]");
        return ext;
    }

    else if (strcmpm(ext, "ACP"))
    {
        strcpy(ext, "VA Software VA - Virtual Architecture CAD file");
        return ext;
    }

    else if (strcmpm(ext, "AMF"))
    {
        strcpy(ext, "Additive Manufacturing File Format");
        return ext;
    }

    else if (strcmpm(ext, "AEC"))
    {
        strcpy(ext, "DataCAD drawing format[5]");
        return ext;
    }

    else if (strcmpm(ext, "AR"))
    {
        strcpy(ext, "Ashlar-Vellum Argon - 3D Modeling");
        return ext;
    }

    else if (strcmpm(ext, "ART"))
    {
        strcpy(ext, "ArtCAM model");
        return ext;
    }

    else if (strcmpm(ext, "ASC"))
    {
        strcpy(ext, "BRL-CAD Geometry File (old ASCII format)");
        return ext;
    }

    else if (strcmpm(ext, "ASM"))
    {
        strcpy(ext, "Solidedge Assembly, Pro/ENGINEER Assembly");
        return ext;
    }

    else if (strcmpm(ext, "BIN, BIM"))
    {
        strcpy(ext, "Data Design System DDS-CAD");
        return ext;
    }

    else if (strcmpm(ext, "BREP"))
    {
        strcpy(ext, "Open CASCADE 3D model (shape)");
        return ext;
    }

    else if (strcmpm(ext, "C3D"))
    {
        strcpy(ext, "C3D Toolkit File Format");
        return ext;
    }

    else if (strcmpm(ext, "C3P"))
    {
        strcpy(ext, "Construct3 Files");
        return ext;
    }

    else if (strcmpm(ext, "CCC"))
    {
        strcpy(ext, "CopyCAD Curves");
        return ext;
    }

    else if (strcmpm(ext, "CCM"))
    {
        strcpy(ext, "CopyCAD Model");
        return ext;
    }

    else if (strcmpm(ext, "CCS"))
    {
        strcpy(ext, "CopyCAD Session");
        return ext;
    }

    else if (strcmpm(ext, "CAD"))
    {
        strcpy(ext, "CadStd");
        return ext;
    }

    else if (strcmpm(ext, "CATDrawing"))
    {
        strcpy(ext, "CATIA V5 Drawing document");
        return ext;
    }

    else if (strcmpm(ext, "CATPart"))
    {
        strcpy(ext, "CATIA V5 Part document");
        return ext;
    }

    else if (strcmpm(ext, "CATProduct"))
    {
        strcpy(ext, "CATIA V5 Assembly document");
        return ext;
    }

    else if (strcmpm(ext, "CATProcess"))
    {
        strcpy(ext, "CATIA V5 Manufacturing document");
        return ext;
    }

    else if (strcmpm(ext, "cgr"))
    {
        strcpy(ext, "CATIA V5 graphic representation file");
        return ext;
    }

    else if (strcmpm(ext, "ckd"))
    {
        strcpy(ext, "KeyCreator CAD Modeling");
        return ext;
    }

    else if (strcmpm(ext, "ckt"))
    {
        strcpy(ext, "KeyCreator CAD Modeling");
        return ext;
    }

    else if (strcmpm(ext, "CO"))
    {
        strcpy(ext, "Ashlar-Vellum Cobalt - parametric drafting and 3D modeling");
        return ext;
    }

    else if (strcmpm(ext, "DRW"))
    {
        strcpy(ext, "Caddie Early version of Caddie drawing - Prior to Caddie changing to DWG");
        return ext;
    }

    else if (strcmpm(ext, "DFT"))
    {
        strcpy(ext, "Solidedge Draft");
        return ext;
    }

    else if (strcmpm(ext, "DGN"))
    {
        strcpy(ext, "MicroStation design file");
        return ext;
    }

    else if (strcmpm(ext, "DGK"))
    {
        strcpy(ext, "Delcam Geometry");
        return ext;
    }

    else if (strcmpm(ext, "DMT"))
    {
        strcpy(ext, "Delcam Machining Triangles");
        return ext;
    }

    else if (strcmpm(ext, "DXF"))
    {
        strcpy(ext, "ASCII Drawing Interchange file format, AutoCAD");
        return ext;
    }

    else if (strcmpm(ext, "DWB"))
    {
        strcpy(ext, "VariCAD drawing file");
        return ext;
    }

    else if (strcmpm(ext, "DWF"))
    {
        strcpy(ext, "Autodesk's Web Design Format; AutoCAD & Revit can publish to this format; similar in concept to PDF files; Autodesk Design Review is the reader");
        return ext;
    }

    else if (strcmpm(ext, "DWG"))
    {
        strcpy(ext, "Popular file format for Computer Aided Drafting applications, notably AutoCAD, Open Design Alliance applications, and Autodesk Inventor Drawing files");
        return ext;
    }

    else if (strcmpm(ext, "EASM"))
    {
        strcpy(ext, "SolidWorks eDrawings assembly file");
        return ext;
    }

    else if (strcmpm(ext, "EDRW"))
    {
        strcpy(ext, "eDrawings drawing file");
        return ext;
    }

    else if (strcmpm(ext, "EMB"))
    {
        strcpy(ext, "Wilcom ES Designer Embroidery CAD file");
        return ext;
    }

    else if (strcmpm(ext, "EPRT"))
    {
        strcpy(ext, "eDrawings part file");
        return ext;
    }

    else if (strcmpm(ext, "EscPcb"))
    {
        strcpy(ext, "'esCAD pcb' data file by Electro-System (Japan)");
        return ext;
    }

    else if (strcmpm(ext, "EscSch"))
    {
        strcpy(ext, "'esCAD sch' data file by Electro-System (Japan)");
        return ext;
    }

    else if (strcmpm(ext, "ESW"))
    {
        strcpy(ext, "AGTEK format");
        return ext;
    }

    else if (strcmpm(ext, "EXCELLON"))
    {
        strcpy(ext, "Excellon file");
        return ext;
    }

    else if (strcmpm(ext, "EXP"))
    {
        strcpy(ext, "Drawing Express format");
        return ext;
    }

    else if (strcmpm(ext, "F3D"))
    {
        strcpy(ext, "Autodesk Fusion 360 archive file[6]");
        return ext;
    }

    else if (strcmpm(ext, "FCStd"))
    {
        strcpy(ext, "Native file format of FreeCAD CAD/CAM package");
        return ext;
    }

    else if (strcmpm(ext, "FM"))
    {
        strcpy(ext, "FeatureCAM Part File");
        return ext;
    }

    else if (strcmpm(ext, "FMZ"))
    {
        strcpy(ext, "FormZ Project file");
        return ext;
    }

    else if (strcmpm(ext, "G"))
    {
        strcpy(ext, "BRL-CAD Geometry File");
        return ext;
    }

    else if (strcmpm(ext, "GBR"))
    {
        strcpy(ext, "Gerber file");
        return ext;
    }

    else if (strcmpm(ext, "GLM"))
    {
        strcpy(ext, "KernelCAD model");
        return ext;
    }

    else if (strcmpm(ext, "GRB"))
    {
        strcpy(ext, "T-FLEX CAD File");
        return ext;
    }

    else if (strcmpm(ext, "GRI"))
    {
        strcpy(ext, "AppliCad GRIM-In file in readable text form for importing roof and wall cladding job data generated by business management and accounting systems into the modelling/estimating program");
        return ext;
    }

    else if (strcmpm(ext, "GRO"))
    {
        strcpy(ext, "AppliCad GRIM-Out file in readable text form for exporting roof and wall cladding data job material and labour costing data, material lists generated by the modelling/estimating program to business management and accounting systems");
        return ext;
    }

    else if (strcmpm(ext, "IAM"))
    {
        strcpy(ext, "Autodesk Inventor Assembly file");
        return ext;
    }

    else if (strcmpm(ext, "ICD"))
    {
        strcpy(ext, "IronCAD 2D CAD file");
        return ext;
    }

    else if (strcmpm(ext, "IDW"))
    {
        strcpy(ext, "Autodesk Inventor Drawing file");
        return ext;
    }

    else if (strcmpm(ext, "IFC"))
    {
        strcpy(ext, "buildingSMART for sharing AEC and FM data");
        return ext;
    }

    else if (strcmpm(ext, "IGES"))
    {
        strcpy(ext, "Initial Graphics Exchange Specification");
        return ext;
    }

    else if (strcmpm(ext, ".dgn, .cel"))
    {
        strcpy(ext, "Intergraph Standard File Formats Intergraph");
        return ext;
    }

    else if (strcmpm(ext, "IO"))
    {
        strcpy(ext, "Stud.io 3d model");
        return ext;
    }

    else if (strcmpm(ext, "IPN"))
    {
        strcpy(ext, "Autodesk Inventor Presentation file");
        return ext;
    }

    else if (strcmpm(ext, "IPT"))
    {
        strcpy(ext, "Autodesk Inventor Part file");
        return ext;
    }

    else if (strcmpm(ext, "JT"))
    {
        strcpy(ext, "Jupiter Tesselation");
        return ext;
    }

    else if (strcmpm(ext, "MCD"))
    {
        strcpy(ext, "Monu-CAD (Monument/Headstone Drawing file)");
        return ext;
    }

    else if (strcmpm(ext, "MDG"))
    {
        strcpy(ext, "Model of Digital Geometric Kernel");
        return ext;
    }

    else if (strcmpm(ext, "model"))
    {
        strcpy(ext, "CATIA V4 part document");
        return ext;
    }

    else if (strcmpm(ext, "OCD"))
    {
        strcpy(ext, "Orienteering Computer Aided Design (OCAD) file");
        return ext;
    }

    else if (strcmpm(ext, "PAR"))
    {
        strcpy(ext, "Solidedge Part");
        return ext;
    }

    else if (strcmpm(ext, "PIPE"))
    {
        strcpy(ext, "PIPE-FLO Professional Piping system design file");
        return ext;
    }

    else if (strcmpm(ext, "PLN"))
    {
        strcpy(ext, "ArchiCad project");
        return ext;
    }

    else if (strcmpm(ext, "PRT"))
    {
        strcpy(ext, "NX (recently known as Unigraphics), Pro/ENGINEER Part, CADKEY Part");
        return ext;
    }

    else if (strcmpm(ext, "PSM"))
    {
        strcpy(ext, "Solidedge Sheet");
        return ext;
    }

    else if (strcmpm(ext, "PSMODEL"))
    {
        strcpy(ext, "PowerSHAPE Model");
        return ext;
    }

    else if (strcmpm(ext, "PWI"))
    {
        strcpy(ext, "PowerINSPECT File");
        return ext;
    }

    else if (strcmpm(ext, "PYT"))
    {
        strcpy(ext, "Pythagoras File");
        return ext;
    }

    else if (strcmpm(ext, "SKP"))
    {
        strcpy(ext, "SketchUp Model");
        return ext;
    }

    else if (strcmpm(ext, "RLF"))
    {
        strcpy(ext, "ArtCAM Relief");
        return ext;
    }

    else if (strcmpm(ext, "RVM"))
    {
        strcpy(ext, "AVEVA PDMS 3D Review model");
        return ext;
    }

    else if (strcmpm(ext, "RVT"))
    {
        strcpy(ext, "Autodesk Revit project files");
        return ext;
    }

    else if (strcmpm(ext, "RFA"))
    {
        strcpy(ext, "Autodesk Revit family files");
        return ext;
    }

    else if (strcmpm(ext, "RXF"))
    {
        strcpy(ext, "AppliCad annotated 3D roof and wall geometry data in readable text form used to exchange 3D model geometry with other systems such as truss design software");
        return ext;
    }

    else if (strcmpm(ext, "S12"))
    {
        strcpy(ext, "Spirit file, by Softtech");
        return ext;
    }

    else if (strcmpm(ext, "SCAD"))
    {
        strcpy(ext, "OpenSCAD 3D part model");
        return ext;
    }

    else if (strcmpm(ext, "SCDOC"))
    {
        strcpy(ext, "SpaceClaim 3D Part/Assembly");
        return ext;
    }

    else if (strcmpm(ext, "SLDASM"))
    {
        strcpy(ext, "SolidWorks Assembly drawing");
        return ext;
    }

    else if (strcmpm(ext, "SLDDRW"))
    {
        strcpy(ext, "SolidWorks 2D drawing");
        return ext;
    }

    else if (strcmpm(ext, "SLDPRT"))
    {
        strcpy(ext, "SolidWorks 3D part model");
        return ext;
    }

    else if (strcmpm(ext, "dotXSI"))
    {
        strcpy(ext, "For Softimage");
        return ext;
    }

    else if (strcmpm(ext, "STEP"))
    {
        strcpy(ext, "Standard for the Exchange of Product model data");
        return ext;
    }

    else if (strcmpm(ext, "STL"))
    {
        strcpy(ext, "Stereo Lithographic data format used by various CAD systems and stereo lithographic printing machines.");
        return ext;
    }

    else if (strcmpm(ext, "STD"))
    {
        strcpy(ext, "Power Vision Plus - Electricity Meter Data (Circuitor)");
        return ext;
    }

    else if (strcmpm(ext, "TCT"))
    {
        strcpy(ext, "TurboCAD drawing template");
        return ext;
    }

    else if (strcmpm(ext, "TCW"))
    {
        strcpy(ext, "TurboCAD for Windows 2D and 3D drawing");
        return ext;
    }

    else if (strcmpm(ext, "UNV"))
    {
        strcpy(ext, "I-DEAS I-DEAS (Integrated Design and Engineering Analysis Software)");
        return ext;
    }

    else if (strcmpm(ext, "VC6"))
    {
        strcpy(ext, "Ashlar-Vellum Graphite - 2D and 3D drafting");
        return ext;
    }

    else if (strcmpm(ext, "VLM"))
    {
        strcpy(ext, "Ashlar-Vellum Vellum, Vellum 2D, Vellum Draft, Vellum 3D, DrawingBoard");
        return ext;
    }

    else if (strcmpm(ext, "VS"))
    {
        strcpy(ext, "Ashlar-Vellum Vellum Solids");
        return ext;
    }

    else if (strcmpm(ext, "WRL"))
    {
        strcpy(ext, "Similar to STL, but includes color. Used by various CAD systems and 3D printing rapid prototyping machines. Also used for VRML models on the web.");
        return ext;
    }

    else if (strcmpm(ext, "X_B"))
    {
        strcpy(ext, "Parasolids binary format");
        return ext;
    }

    else if (strcmpm(ext, "X_T"))
    {
        strcpy(ext, "Parasolids");
        return ext;
    }

    else if (strcmpm(ext, "XE"))
    {
        strcpy(ext, "Ashlar-Vellum Xenon - for associative 3D modeling");
        return ext;
    }

    else if (strcmpm(ext, "ZOFZPROJ"))
    {
        strcpy(ext, "ZofzPCB 3D PCB model, containing mesh, netlist and BOM");
        return ext;
    }

    else if (strcmpm(ext, "BRD"))
    {
        strcpy(ext, "Board file for EAGLE Layout Editor, a commercial PCB design tool");
        return ext;
    }

    else if (strcmpm(ext, "BSDL"))
    {
        strcpy(ext, "Description language for testing through JTAG");
        return ext;
    }

    else if (strcmpm(ext, "CDL"))
    {
        strcpy(ext, "Transistor-level netlist format for IC design");
        return ext;
    }

    else if (strcmpm(ext, "CPF"))
    {
        strcpy(ext, "Power-domain specification in system-on-a-chip (SoC) implementation (see also UPF)");
        return ext;
    }

    else if (strcmpm(ext, "DEF"))
    {
        strcpy(ext, "Gate-level layout");
        return ext;
    }

    else if (strcmpm(ext, "DSPF"))
    {
        strcpy(ext, "Detailed Standard Parasitic Format, Analog-level parasitics of interconnections in IC design");
        return ext;
    }

    else if (strcmpm(ext, "EDIF"))
    {
        strcpy(ext, "Vendor neutral gate-level netlist format");
        return ext;
    }

    else if (strcmpm(ext, "FSDB"))
    {
        strcpy(ext, "Analog waveform format (see also Waveform viewer)");
        return ext;
    }

    else if (strcmpm(ext, "GDSII"))
    {
        strcpy(ext, "Format for PCB and layout of integrated circuits");
        return ext;
    }

    else if (strcmpm(ext, "HEX"))
    {
        strcpy(ext, "ASCII-coded binary format for memory dumps");
        return ext;
    }

    else if (strcmpm(ext, "LEF"))
    {
        strcpy(ext, "Library Exchange Format, physical abstract of cells for IC design");
        return ext;
    }

    else if (strcmpm(ext, "LIB"))
    {
        strcpy(ext, "Library modeling (function, timing) format");
        return ext;
    }

    else if (strcmpm(ext, "MS12"))
    {
        strcpy(ext, "NI Multisim file");
        return ext;
    }

    else if (strcmpm(ext, "OASIS"))
    {
        strcpy(ext, "Open Artwork System Interchange Standard");
        return ext;
    }

    else if (strcmpm(ext, "OpenAccess"))
    {
        strcpy(ext, "Design database format with APIs");
        return ext;
    }

    else if (strcmpm(ext, "PSF"))
    {
        strcpy(ext, "Cadence proprietary format to store simulation results/waveforms (2GB limit)");
        return ext;
    }

    else if (strcmpm(ext, "PSFXL"))
    {
        strcpy(ext, "Cadence proprietary format to store simulation results/waveforms");
        return ext;
    }

    else if (strcmpm(ext, "SDC"))
    {
        strcpy(ext, "Synopsys Design Constraints, format for synthesis constraints");
        return ext;
    }

    else if (strcmpm(ext, "SDF"))
    {
        strcpy(ext, "Standard for gate-level timings");
        return ext;
    }

    else if (strcmpm(ext, "SPEF"))
    {
        strcpy(ext, "Standard format for parasitics of interconnections in IC design");
        return ext;
    }

    else if (strcmpm(ext, "SPI, CIR"))
    {
        strcpy(ext, "SPICE Netlist, device-level netlist and commands for simulation");
        return ext;
    }

    else if (strcmpm(ext, "SREC, S19"))
    {
        strcpy(ext, "S-record, ASCII-coded format for memory dumps");
        return ext;
    }

    else if (strcmpm(ext, "SST2"))
    {
        strcpy(ext, "Cadence proprietary format to store mixed-signal simulation results/waveforms");
        return ext;
    }

    else if (strcmpm(ext, "STIL"))
    {
        strcpy(ext, "Standard Test Interface Language, IEEE1450-1999 standard for Test Patterns for IC");
        return ext;
    }

    else if (strcmpm(ext, "SV"))
    {
        strcpy(ext, "SystemVerilog source file");
        return ext;
    }

    else if (strcmpm(ext, "S*P"))
    {
        strcpy(ext, "Touchstone/EEsof Scattering parameter data file - multi-port blackbox performance, measurement or simulated");
        return ext;
    }

    else if (strcmpm(ext, "TLF"))
    {
        strcpy(ext, "Contains timing and logical information about a collection of cells (circuit elements)");
        return ext;
    }

    else if (strcmpm(ext, "UPF"))
    {
        strcpy(ext, "Standard for Power-domain specification in SoC implementation");
        return ext;
    }

    else if (strcmpm(ext, "V"))
    {
        strcpy(ext, "Verilog source file");
        return ext;
    }

    else if (strcmpm(ext, "VCD"))
    {
        strcpy(ext, "Standard format for digital simulation waveform");
        return ext;
    }

    else if (strcmpm(ext, "VHD, VHDL"))
    {
        strcpy(ext, "VHDL source file");
        return ext;
    }

    else if (strcmpm(ext, "WGL"))
    {
        strcpy(ext, "Waveform Generation Language, format for Test Patterns for IC");
        return ext;
    }

    else if (strcmpm(ext, "4DB"))
    {
        strcpy(ext, "4D database Structure file");
        return ext;
    }

    else if (strcmpm(ext, "4DD"))
    {
        strcpy(ext, "4D database Data file");
        return ext;
    }

    else if (strcmpm(ext, "4DIndy"))
    {
        strcpy(ext, "4D database Structure Index file");
        return ext;
    }

    else if (strcmpm(ext, "4DIndx"))
    {
        strcpy(ext, "4D database Data Index file");
        return ext;
    }

    else if (strcmpm(ext, "4DR"))
    {
        strcpy(ext, "4D database Data resource file (in old 4D versions)");
        return ext;
    }

    else if (strcmpm(ext, "ACCDB"))
    {
        strcpy(ext, "Microsoft Database (Microsoft Office Access 2007 and later)");
        return ext;
    }

    else if (strcmpm(ext, "ACCDE"))
    {
        strcpy(ext, "Compiled Microsoft Database (Microsoft Office Access 2007 and later)");
        return ext;
    }

    else if (strcmpm(ext, "ADT"))
    {
        strcpy(ext, "Sybase Advantage Database Server (ADS)");
        return ext;
    }

    else if (strcmpm(ext, "APR"))
    {
        strcpy(ext, "Lotus Approach data entry & reports");
        return ext;
    }

    else if (strcmpm(ext, "BOX"))
    {
        strcpy(ext, "Lotus Notes Post Office mail routing database");
        return ext;
    }

    else if (strcmpm(ext, "CHML"))
    {
        strcpy(ext, "Krasbit Technologies Encrypted database file for 1 click integration between contact management software and the chameleon(tm) line of imaging workflow solutions");
        return ext;
    }

    else if (strcmpm(ext, "DAF"))
    {
        strcpy(ext, "Digital Anchor data file");
        return ext;
    }

    else if (strcmpm(ext, "DAT"))
    {
        strcpy(ext, "DOS Basic");
        return ext;
    }

    else if (strcmpm(ext, "DAT"))
    {
        strcpy(ext, "Intersystems Caché database file");
        return ext;
    }

    else if (strcmpm(ext, "DB"))
    {
        strcpy(ext, "Paradox");
        return ext;
    }

    else if (strcmpm(ext, "DB"))
    {
        strcpy(ext, "SQLite");
        return ext;
    }

    else if (strcmpm(ext, "DBF"))
    {
        strcpy(ext, "db/dbase II,III,IV and V, Clipper, Harbour/xHarbour, Fox/FoxPro, Oracle");
        return ext;
    }

    else if (strcmpm(ext, "DTA"))
    {
        strcpy(ext, "Sage Sterling database file");
        return ext;
    }

    else if (strcmpm(ext, "EGT"))
    {
        strcpy(ext, "EGT Universal Document, used to compress sql databases to smaller files, may contain original EGT database style.");
        return ext;
    }

    else if (strcmpm(ext, "ESS"))
    {
        strcpy(ext, "EGT SmartSense is a database of files and its compression style. Specific to EGT SmartSense");
        return ext;
    }

    else if (strcmpm(ext, "EAP"))
    {
        strcpy(ext, "Enterprise Architect Project");
        return ext;
    }

    else if (strcmpm(ext, "FDB"))
    {
        strcpy(ext, "Firebird Databases");
        return ext;
    }

    else if (strcmpm(ext, "FDB"))
    {
        strcpy(ext, "Navision database file");
        return ext;
    }

    else if (strcmpm(ext, "FP, FP3, FP5, FP7"))
    {
        strcpy(ext, "FileMaker Pro");
        return ext;
    }

    else if (strcmpm(ext, "FRM"))
    {
        strcpy(ext, "MySQL table definition");
        return ext;
    }

    else if (strcmpm(ext, "GDB"))
    {
        strcpy(ext, "Borland InterBase Databases");
        return ext;
    }

    else if (strcmpm(ext, "GTABLE"))
    {
        strcpy(ext, "Google Drive Fusion Table");
        return ext;
    }

    else if (strcmpm(ext, "KEXI"))
    {
        strcpy(ext, "Kexi database file (SQLite-based)");
        return ext;
    }

    else if (strcmpm(ext, "KEXIC"))
    {
        strcpy(ext, "shortcut to a database connection for a Kexi databases on a server");
        return ext;
    }

    else if (strcmpm(ext, "KEXIS"))
    {
        strcpy(ext, "shortcut to a Kexi database");
        return ext;
    }

    else if (strcmpm(ext, "LDB"))
    {
        strcpy(ext, "Temporary database file, only existing when database is open");
        return ext;
    }

    else if (strcmpm(ext, "LIRS"))
    {
        strcpy(ext, "Layered Intager Storage. Stores intageres with characters such as semicolons to create lists of data.");
        return ext;
    }

    else if (strcmpm(ext, "MDA"))
    {
        strcpy(ext, "Add-in file for Microsoft Access");
        return ext;
    }

    else if (strcmpm(ext, "MDB"))
    {
        strcpy(ext, "Microsoft Access database");
        return ext;
    }

    else if (strcmpm(ext, "ADP"))
    {
        strcpy(ext, "Microsoft Access project (used for accessing databases on a server)");
        return ext;
    }

    else if (strcmpm(ext, "MDE"))
    {
        strcpy(ext, "Compiled Microsoft Database (Access)");
        return ext;
    }

    else if (strcmpm(ext, "MDF"))
    {
        strcpy(ext, "Microsoft SQL Server Database");
        return ext;
    }

    else if (strcmpm(ext, "MYD"))
    {
        strcpy(ext, "MySQL MyISAM table data");
        return ext;
    }

    else if (strcmpm(ext, "MYI"))
    {
        strcpy(ext, "MySQL MyISAM table index");
        return ext;
    }

    else if (strcmpm(ext, "NCF"))
    {
        strcpy(ext, "Lotus Notes configuration file");
        return ext;
    }

    else if (strcmpm(ext, "NSF"))
    {
        strcpy(ext, "Lotus Notes database");
        return ext;
    }

    else if (strcmpm(ext, "NTF"))
    {
        strcpy(ext, "Lotus Notes database design template");
        return ext;
    }

    else if (strcmpm(ext, "NV2"))
    {
        strcpy(ext, "QW Page NewViews object oriented accounting database");
        return ext;
    }

    else if (strcmpm(ext, "ODB"))
    {
        strcpy(ext, "LibreOffice Base or OpenOffice Base database");
        return ext;
    }

    else if (strcmpm(ext, "ORA"))
    {
        strcpy(ext, "Oracle tablespace files sometimes get this extension (also used for configuration files)");
        return ext;
    }

    else if (strcmpm(ext, "PCONTACT"))
    {
        strcpy(ext, "WinIM Contact file");
        return ext;
    }

    else if (strcmpm(ext, "PDB"))
    {
        strcpy(ext, "Palm OS Database");
        return ext;
    }

    else if (strcmpm(ext, "PDI"))
    {
        strcpy(ext, "Portable Database Image");
        return ext;
    }

    else if (strcmpm(ext, "PDX"))
    {
        strcpy(ext, "Corel Paradox database management");
        return ext;
    }

    else if (strcmpm(ext, "PRC"))
    {
        strcpy(ext, "Palm OS resource database");
        return ext;
    }

    else if (strcmpm(ext, "SQL"))
    {
        strcpy(ext, "bundled SQL queries");
        return ext;
    }

    else if (strcmpm(ext, "REC"))
    {
        strcpy(ext, "GNU recutils database");
        return ext;
    }

    else if (strcmpm(ext, "REL"))
    {
        strcpy(ext, "Sage Retrieve 4GL data file");
        return ext;
    }

    else if (strcmpm(ext, "RIN"))
    {
        strcpy(ext, "Sage Retrieve 4GL index file");
        return ext;
    }

    else if (strcmpm(ext, "SDB"))
    {
        strcpy(ext, "StarOffice's StarBase");
        return ext;
    }

    else if (strcmpm(ext, "SDF"))
    {
        strcpy(ext, "SQL Compact Database file");
        return ext;
    }

    else if (strcmpm(ext, "sqlite"))
    {
        strcpy(ext, "SQLite");
        return ext;
    }

    else if (strcmpm(ext, "UDL"))
    {
        strcpy(ext, "Universal Data Link");
        return ext;
    }

    else if (strcmpm(ext, "waData"))
    {
        strcpy(ext, "Wakanda (software) database Data file");
        return ext;
    }

    else if (strcmpm(ext, "waIndx"))
    {
        strcpy(ext, "Wakanda (software) database Index file");
        return ext;
    }

    else if (strcmpm(ext, "waModel"))
    {
        strcpy(ext, "Wakanda (software) database Model file");
        return ext;
    }

    else if (strcmpm(ext, "waJournal"))
    {
        strcpy(ext, "Wakanda (software) database Journal file");
        return ext;
    }

    else if (strcmpm(ext, "WDB"))
    {
        strcpy(ext, "Microsoft Works Database");
        return ext;
    }

    else if (strcmpm(ext, "WMDB"))
    {
        strcpy(ext, "Windows Media Database file - The CurrentDatabase_360.wmdb file can contain file name, file properties, music, video, photo and playlist information.");
        return ext;
    }

    else if (strcmpm(ext, "Avro"))
    {
        strcpy(ext, "Data format appropriate for ingestion of record based attributes. Distinguishing characteristic is schema is stored on each row enabling schema evolution.");
        return ext;
    }

    else if (strcmpm(ext, "Parquet"))
    {
        strcpy(ext, "Columnar data storage. It is typically used within the Hadoop ecosystem.");
        return ext;
    }

    else if (strcmpm(ext, "ORC"))
    {
        strcpy(ext, "Similar to Parquet, but has better data compression and schema evolution handling.");
        return ext;
    }

    else if (strcmpm(ext, "AI"))
    {
        strcpy(ext, "Adobe Illustrator");
        return ext;
    }

    else if (strcmpm(ext, "AVE, ZAVE"))
    {
        strcpy(ext, "Aquafadas");
        return ext;
    }

    else if (strcmpm(ext, "CDR"))
    {
        strcpy(ext, "CorelDRAW");
        return ext;
    }

    else if (strcmpm(ext, "CHP, pub, STY, CAP, CIF, VGR, FRM"))
    {
        strcpy(ext, "Ventura Publisher - Xerox (DOS / GEM)");
        return ext;
    }

    else if (strcmpm(ext, "CPT"))
    {
        strcpy(ext, "Corel Photo-Paint");
        return ext;
    }

    else if (strcmpm(ext, "DTP"))
    {
        strcpy(ext, "Greenstreet Publisher, GST PressWorks");
        return ext;
    }

    else if (strcmpm(ext, "FM"))
    {
        strcpy(ext, "Adobe FrameMaker");
        return ext;
    }

    else if (strcmpm(ext, "GDRAW"))
    {
        strcpy(ext, "Google Drive Drawing");
        return ext;
    }

    else if (strcmpm(ext, "ILDOC"))
    {
        strcpy(ext, "Broadvision Quicksilver document");
        return ext;
    }

    else if (strcmpm(ext, "INDD"))
    {
        strcpy(ext, "Adobe InDesign");
        return ext;
    }

    else if (strcmpm(ext, "MCF"))
    {
        strcpy(ext, "FotoInsight Designer");
        return ext;
    }

    else if (strcmpm(ext, "PDF"))
    {
        strcpy(ext, "Adobe Acrobat or Adobe Reader");
        return ext;
    }

    else if (strcmpm(ext, "PMD"))
    {
        strcpy(ext, "Adobe PageMaker");
        return ext;
    }

    else if (strcmpm(ext, "PPP"))
    {
        strcpy(ext, "Serif PagePlus");
        return ext;
    }

    else if (strcmpm(ext, "PSD"))
    {
        strcpy(ext, "Adobe Photoshop");
        return ext;
    }

    else if (strcmpm(ext, "PUB"))
    {
        strcpy(ext, "Microsoft Publisher");
        return ext;
    }

    else if (strcmpm(ext, "QXD"))
    {
        strcpy(ext, "QuarkXPress");
        return ext;
    }

    else if (strcmpm(ext, "SLA, SCD"))
    {
        strcpy(ext, "Scribus");
        return ext;
    }

    else if (strcmpm(ext, "XCF"))
    {
        strcpy(ext, "XCF: File format used by the GIMP, as well as other programs");
        return ext;
    }

    else if (strcmpm(ext, "0"))
    {
        strcpy(ext, "Plain Text Document, normally used for licensing");
        return ext;
    }

    else if (strcmpm(ext, "1ST"))
    {
        strcpy(ext, "Plain Text Document, normally preceded by the words 'README' (README.1ST)");
        return ext;
    }

    else if (strcmpm(ext, "600"))
    {
        strcpy(ext, "Plain Text Document, used in UNZIP history log");
        return ext;
    }

    else if (strcmpm(ext, "602"))
    {
        strcpy(ext, "Text602 (T602) document");
        return ext;
    }

    else if (strcmpm(ext, "ABW"))
    {
        strcpy(ext, "AbiWord document");
        return ext;
    }

    else if (strcmpm(ext, "ACL"))
    {
        strcpy(ext, "MS Word AutoCorrect List");
        return ext;
    }

    else if (strcmpm(ext, "AFP"))
    {
        strcpy(ext, "Advanced Function Presentation");
        return ext;
    }

    else if (strcmpm(ext, "AMI"))
    {
        strcpy(ext, "Lotus Ami Pro Amigaguide");
        return ext;
    }

    else if (strcmpm(ext, "ANS"))
    {
        strcpy(ext, "American National Standards Institute (ANSI) text");
        return ext;
    }

    else if (strcmpm(ext, "ASC"))
    {
        strcpy(ext, "ASCII text");
        return ext;
    }

    else if (strcmpm(ext, "AWW"))
    {
        strcpy(ext, "Ability Write");
        return ext;
    }

    else if (strcmpm(ext, "CCF"))
    {
        strcpy(ext, "Color Chat 1.0");
        return ext;
    }

    else if (strcmpm(ext, "CSV"))
    {
        strcpy(ext, "ASCII text as comma-separated values, used in spreadsheets and database management systems");
        return ext;
    }

    else if (strcmpm(ext, "CWK"))
    {
        strcpy(ext, "ClarisWorks-AppleWorks document");
        return ext;
    }

    else if (strcmpm(ext, "DBK"))
    {
        strcpy(ext, "DocBook XML sub-format");
        return ext;
    }

    else if (strcmpm(ext, "DITA"))
    {
        strcpy(ext, "Darwin Information Typing Architecture document");
        return ext;
    }

    else if (strcmpm(ext, "DOC"))
    {
        strcpy(ext, "Microsoft Word document");
        return ext;
    }

    else if (strcmpm(ext, "DOCM"))
    {
        strcpy(ext, "Microsoft Word macro-enabled document");
        return ext;
    }

    else if (strcmpm(ext, "DOCX"))
    {
        strcpy(ext, "Office Open XML document");
        return ext;
    }

    else if (strcmpm(ext, "DOT"))
    {
        strcpy(ext, "Microsoft Word document template");
        return ext;
    }

    else if (strcmpm(ext, "DOTX"))
    {
        strcpy(ext, "Office Open XML text document template");
        return ext;
    }

    else if (strcmpm(ext, "DWD"))
    {
        strcpy(ext, "DavkaWriter Heb/Eng word processor file");
        return ext;
    }

    else if (strcmpm(ext, "EGT"))
    {
        strcpy(ext, "EGT Universal Document");
        return ext;
    }

    else if (strcmpm(ext, "EPUB"))
    {
        strcpy(ext, "EPUB open standard for e-books");
        return ext;
    }

    else if (strcmpm(ext, "EZW"))
    {
        strcpy(ext, "Reagency Systems easyOFFER document[7]");
        return ext;
    }

    else if (strcmpm(ext, "FDX"))
    {
        strcpy(ext, "Final Draft");
        return ext;
    }

    else if (strcmpm(ext, "FTM"))
    {
        strcpy(ext, "Fielded Text Meta");
        return ext;
    }

    else if (strcmpm(ext, "FTX"))
    {
        strcpy(ext, "Fielded Text (Declared)");
        return ext;
    }

    else if (strcmpm(ext, "GDOC"))
    {
        strcpy(ext, "Google Drive Document");
        return ext;
    }

    else if (strcmpm(ext, "HTML"))
    {
        strcpy(ext, "HyperText Markup Language (.html, .htm)");
        return ext;
    }

    else if (strcmpm(ext, "HWP"))
    {
        strcpy(ext, "Haansoft (Hancom) Hangul Word Processor document");
        return ext;
    }

    else if (strcmpm(ext, "HWPML"))
    {
        strcpy(ext, "Haansoft (Hancom) Hangul Word Processor Markup Language document");
        return ext;
    }

    else if (strcmpm(ext, "LOG"))
    {
        strcpy(ext, "Text log file");
        return ext;
    }

    else if (strcmpm(ext, "LWP"))
    {
        strcpy(ext, "Lotus Word Pro");
        return ext;
    }

    else if (strcmpm(ext, "MBP"))
    {
        strcpy(ext, "metadata for Mobipocket documents");
        return ext;
    }

    else if (strcmpm(ext, "MD"))
    {
        strcpy(ext, "Markdown text document");
        return ext;
    }

    else if (strcmpm(ext, "ME"))
    {
        strcpy(ext, "Plain text document normally preceded by the word 'READ' (READ.ME)");
        return ext;
    }

    else if (strcmpm(ext, "MCW"))
    {
        strcpy(ext, "Microsoft Word for Macintosh (versions 4.0-5.1)");
        return ext;
    }

    else if (strcmpm(ext, "Mobi"))
    {
        strcpy(ext, "Mobipocket documents");
        return ext;
    }

    else if (strcmpm(ext, "NB"))
    {
        strcpy(ext, "Mathematica Notebook");
        return ext;
    }

    else if (strcmpm(ext, "nb"))
    {
        strcpy(ext, "Nota Bene Document (Academic Writing Software)");
        return ext;
    }

    else if (strcmpm(ext, "NBP"))
    {
        strcpy(ext, "Mathematica Player Notebook");
        return ext;
    }

    else if (strcmpm(ext, "NEIS"))
    {
        strcpy(ext, "학교생활기록부 작성 프로그램 (Student Record Writing Program) Document");
        return ext;
    }

    else if (strcmpm(ext, "NT"))
    {
        strcpy(ext, "N-Triples RDF container (.nt)");
        return ext;
    }

    else if (strcmpm(ext, "NQ"))
    {
        strcpy(ext, "N-Quads RDF container (.nq)");
        return ext;
    }

    else if (strcmpm(ext, "ODM"))
    {
        strcpy(ext, "OpenDocument master document");
        return ext;
    }

    else if (strcmpm(ext, "ODOC"))
    {
        strcpy(ext, "Synology Drive Office Document");
        return ext;
    }

    else if (strcmpm(ext, "ODT"))
    {
        strcpy(ext, "OpenDocument text document");
        return ext;
    }

    else if (strcmpm(ext, "OSHEET"))
    {
        strcpy(ext, "Synology Drive Office Spreadsheet");
        return ext;
    }

    else if (strcmpm(ext, "OTT"))
    {
        strcpy(ext, "OpenDocument text document template");
        return ext;
    }

    else if (strcmpm(ext, "OMM"))
    {
        strcpy(ext, "OmmWriter text document");
        return ext;
    }

    else if (strcmpm(ext, "PAGES"))
    {
        strcpy(ext, "Apple Pages document");
        return ext;
    }

    else if (strcmpm(ext, "PAP"))
    {
        strcpy(ext, "Papyrus word processor document");
        return ext;
    }

    else if (strcmpm(ext, "PER"))
    {
        strcpy(ext, "Canadian Forces Personnel Appraisal System (CFPAS) Personnel Evaluation Report (PER)");
        return ext;
    }

    else if (strcmpm(ext, "PDR"))
    {
        strcpy(ext, "Canadian Forces Personnel Appraisal System (CFPAS) Personnel Development Report (PDR)");
        return ext;
    }

    else if (strcmpm(ext, "PDAX"))
    {
        strcpy(ext, "Portable Document Archive (PDA) document index file");
        return ext;
    }

    else if (strcmpm(ext, "PDF"))
    {
        strcpy(ext, "Portable Document Format");
        return ext;
    }

    else if (strcmpm(ext, "QUOX"))
    {
        strcpy(ext, "Question Object File Format for Quobject Designer or Quobject Explorer");
        return ext;
    }

    else if (strcmpm(ext, "Radix-64"))
    {
        strcpy(ext, "Need helps!!!");
        return ext;
    }

    else if (strcmpm(ext, "RTF"))
    {
        strcpy(ext, "Rich Text document");
        return ext;
    }

    else if (strcmpm(ext, "RPT"))
    {
        strcpy(ext, "Crystal Reports");
        return ext;
    }

    else if (strcmpm(ext, "SDW"))
    {
        strcpy(ext, "StarWriter text document, used in earlier versions of StarOffice");
        return ext;
    }

    else if (strcmpm(ext, "SE"))
    {
        strcpy(ext, "Shuttle Document");
        return ext;
    }

    else if (strcmpm(ext, "STW"))
    {
        strcpy(ext, "OpenOffice.org XML (obsolete) text document template");
        return ext;
    }

    else if (strcmpm(ext, "Sxw"))
    {
        strcpy(ext, "OpenOffice.org XML (obsolete) text document");
        return ext;
    }

    else if (strcmpm(ext, "TeX"))
    {
        strcpy(ext, "TeX");
        return ext;
    }

    else if (strcmpm(ext, "INFO"))
    {
        strcpy(ext, "Texinfo");
        return ext;
    }

    else if (strcmpm(ext, "Troff"))
    {
        strcpy(ext, "Unix OS document processing system");
        return ext;
    }

    else if (strcmpm(ext, "TXT"))
    {
        strcpy(ext, "ASCII or Unicode plain text file");
        return ext;
    }

    else if (strcmpm(ext, "UOF"))
    {
        strcpy(ext, "Uniform Office Format");
        return ext;
    }

    else if (strcmpm(ext, "UOML"))
    {
        strcpy(ext, "Unique Object Markup Language");
        return ext;
    }

    else if (strcmpm(ext, "VIA"))
    {
        strcpy(ext, "Revoware VIA Document Project File");
        return ext;
    }

    else if (strcmpm(ext, "WPD"))
    {
        strcpy(ext, "WordPerfect document");
        return ext;
    }

    else if (strcmpm(ext, "WPS"))
    {
        strcpy(ext, "Microsoft Works document");
        return ext;
    }

    else if (strcmpm(ext, "WPT"))
    {
        strcpy(ext, "Microsoft Works document template");
        return ext;
    }

    else if (strcmpm(ext, "WRD"))
    {
        strcpy(ext, "WordIt! document");
        return ext;
    }

    else if (strcmpm(ext, "WRF"))
    {
        strcpy(ext, "ThinkFree Write");
        return ext;
    }

    else if (strcmpm(ext, "WRI"))
    {
        strcpy(ext, "Microsoft Write document");
        return ext;
    }

    else if (strcmpm(ext, "xhtml, xht"))
    {
        strcpy(ext, "XHTML eXtensible HyperText Markup Language");
        return ext;
    }

    else if (strcmpm(ext, "XML"))
    {
        strcpy(ext, "eXtensible Markup Language");
        return ext;
    }

    else if (strcmpm(ext, "XPS"))
    {
        strcpy(ext, "XPS: Open XML Paper Specification");
        return ext;
    }

    else if (strcmpm(ext, "MYO"))
    {
        strcpy(ext, "MYOB Limited (Windows) File");
        return ext;
    }

    else if (strcmpm(ext, "MYOB"))
    {
        strcpy(ext, "MYOB Limited (Mac) File");
        return ext;
    }

    else if (strcmpm(ext, "TAX"))
    {
        strcpy(ext, "TurboTax File");
        return ext;
    }

    else if (strcmpm(ext, "YNAB"))
    {
        strcpy(ext, "You Need a Budget (YNAB) File");
        return ext;
    }

    else if (strcmpm(ext, "IFX"))
    {
        strcpy(ext, "Interactive Financial Exchange XML-based specification for various forms of financial transactions");
        return ext;
    }

    else if (strcmpm(ext, ".ofx"))
    {
        strcpy(ext, "Open Financial Exchange， open standard supported by CheckFree and Microsoft and partly by Intuit; SGML and later XML based");
        return ext;
    }

    else if (strcmpm(ext, "QFX"))
    {
        strcpy(ext, "proprietary pay-only format used only by Intuit");
        return ext;
    }

    else if (strcmpm(ext, ".qif"))
    {
        strcpy(ext, "Quicken Interchange Format open standard formerly supported by Intuit");
        return ext;
    }

    else if (strcmpm(ext, "ABF"))
    {
        strcpy(ext, "Adobe Binary Screen Font");
        return ext;
    }

    else if (strcmpm(ext, "AFM"))
    {
        strcpy(ext, "Adobe Font Metrics");
        return ext;
    }

    else if (strcmpm(ext, "BDF"))
    {
        strcpy(ext, "Bitmap Distribution Format");
        return ext;
    }

    else if (strcmpm(ext, "BMF"))
    {
        strcpy(ext, "ByteMap Font Format");
        return ext;
    }

    else if (strcmpm(ext, "BRFNT"))
    {
        strcpy(ext, "Binary Revolution Font Format");
        return ext;
    }

    else if (strcmpm(ext, "FNT"))
    {
        strcpy(ext, "Bitmapped Font - Graphics Environment Manager (GEM)");
        return ext;
    }

    else if (strcmpm(ext, "FON"))
    {
        strcpy(ext, "Bitmapped Font - Microsoft Windows");
        return ext;
    }

    else if (strcmpm(ext, "MGF"))
    {
        strcpy(ext, "MicroGrafx Font");
        return ext;
    }

    else if (strcmpm(ext, "OTF"))
    {
        strcpy(ext, "OpenType Font");
        return ext;
    }

    else if (strcmpm(ext, "PCF"))
    {
        strcpy(ext, "Portable Compiled Format");
        return ext;
    }

    else if (strcmpm(ext, "PFA"))
    {
        strcpy(ext, "Printer Font ASCII");
        return ext;
    }

    else if (strcmpm(ext, "PFB"))
    {
        strcpy(ext, "Printer Font Binary - Adobe");
        return ext;
    }

    else if (strcmpm(ext, "PFM"))
    {
        strcpy(ext, "Printer Font Metrics - Adobe");
        return ext;
    }

    else if (strcmpm(ext, "AFM"))
    {
        strcpy(ext, "Adobe Font Metrics");
        return ext;
    }

    else if (strcmpm(ext, "FOND"))
    {
        strcpy(ext, "Font Description resource - Mac OS");
        return ext;
    }

    else if (strcmpm(ext, "SFD"))
    {
        strcpy(ext, "FontForge spline font database Font");
        return ext;
    }

    else if (strcmpm(ext, "SNF"))
    {
        strcpy(ext, "Server Normal Format");
        return ext;
    }

    else if (strcmpm(ext, "TDF"))
    {
        strcpy(ext, "TheDraw Font");
        return ext;
    }

    else if (strcmpm(ext, "TFM"))
    {
        strcpy(ext, "TeX font metric");
        return ext;
    }

    else if (strcmpm(ext, ".ttf, .ttc"))
    {
        strcpy(ext, "TrueType Font");
        return ext;
    }

    else if (strcmpm(ext, "UFO"))
    {
        strcpy(ext, "Unified Font Object is a cross-platform, cross-application, human readable, future proof format for storing font data.");
        return ext;
    }

    else if (strcmpm(ext, "WOFF"))
    {
        strcpy(ext, "Web Open Font Format");
        return ext;
    }

    else if (strcmpm(ext, "IFDS"))
    {
        strcpy(ext, "Incredibly Flexible Data Storage file format. File extension and the magic number does not have to be IFDS.[8]");
        return ext;
    }

    else if (strcmpm(ext, "ASC"))
    {
        strcpy(ext, "ASCII point of interest (POI) text file");
        return ext;
    }

    else if (strcmpm(ext, "APR"))
    {
        strcpy(ext, "ESRI ArcView 3.3 and earlier project file");
        return ext;
    }

    else if (strcmpm(ext, "DEM"))
    {
        strcpy(ext, "USGS DEM file format");
        return ext;
    }

    else if (strcmpm(ext, "E00"))
    {
        strcpy(ext, "ARC/INFO interchange file format");
        return ext;
    }

    else if (strcmpm(ext, "GeoJSON"))
    {
        strcpy(ext, "Geographically located data in object notation");
        return ext;
    }

    else if (strcmpm(ext, "TopoJSON"))
    {
        strcpy(ext, "Extension of GeoJSON with topology encoded in arcs for web development");
        return ext;
    }

    else if (strcmpm(ext, "GeoTIFF"))
    {
        strcpy(ext, "Geographically located raster data");
        return ext;
    }

    else if (strcmpm(ext, "GML"))
    {
        strcpy(ext, "Geography Markup Language file[9]");
        return ext;
    }

    else if (strcmpm(ext, "GPX"))
    {
        strcpy(ext, "XML-based interchange format");
        return ext;
    }

    else if (strcmpm(ext, "ITN"))
    {
        strcpy(ext, "TomTom Itinerary format");
        return ext;
    }

    else if (strcmpm(ext, "MXD"))
    {
        strcpy(ext, "ESRI ArcGIS project file, 8.0 and higher");
        return ext;
    }

    else if (strcmpm(ext, "NTF"))
    {
        strcpy(ext, "National Transfer Format file");
        return ext;
    }

    else if (strcmpm(ext, "OV2"))
    {
        strcpy(ext, "TomTom POI overlay file");
        return ext;
    }

    else if (strcmpm(ext, "SHP"))
    {
        strcpy(ext, "ESRI shapefile");
        return ext;
    }

    else if (strcmpm(ext, "TAB"))
    {
        strcpy(ext, "MapInfo Table file format");
        return ext;
    }

    else if (strcmpm(ext, "GeoTIFF"))
    {
        strcpy(ext, "Geographically located raster data: text file giving corner coordinate, raster cells per unit, and rotation");
        return ext;
    }

    else if (strcmpm(ext, "DTED"))
    {
        strcpy(ext, "Digital Terrain Elevation Data");
        return ext;
    }

    else if (strcmpm(ext, "KML"))
    {
        strcpy(ext, "Keyhole Markup Language, XML-based");
        return ext;
    }

    else if (strcmpm(ext, "3DT"))
    {
        strcpy(ext, "3D Topicscape, the database in which the meta-data of a 3D Topicscape is held, it is a form of 3D concept map (like a 3D mind-map) used to organize ideas, information, and computer files");
        return ext;
    }

    else if (strcmpm(ext, "ATY"))
    {
        strcpy(ext, "3D Topicscape file, produced when an association type is exported; used to permit round-trip (export Topicscape, change files and folders as desired, re-import to 3D Topicscape)");
        return ext;
    }

    else if (strcmpm(ext, "CAG"))
    {
        strcpy(ext, "Linear Reference System");
        return ext;
    }

    else if (strcmpm(ext, "FES"))
    {
        strcpy(ext, "3D Topicscape file, produced when a fileless occurrence in 3D Topicscape is exported to Windows. Used to permit round-trip (export Topicscape, change files and folders as desired, re-import them to 3D Topicscape)");
        return ext;
    }

    else if (strcmpm(ext, "MGMF"))
    {
        strcpy(ext, "MindGenius Mind Mapping Software file format");
        return ext;
    }

    else if (strcmpm(ext, "MM"))
    {
        strcpy(ext, "FreeMind mind map file (XML)");
        return ext;
    }

    else if (strcmpm(ext, "MMP"))
    {
        strcpy(ext, "Mind Manager mind map file");
        return ext;
    }

    else if (strcmpm(ext, "TPC"))
    {
        strcpy(ext, "3D Topicscape file, produced when an inter-Topicscape topic link file is exported to Windows; used to permit round-trip (export Topicscape, change files and folders as desired, re-import to 3D Topicscape)");
        return ext;
    }

    else if (strcmpm(ext, "ACT"))
    {
        strcpy(ext, "Adobe Color Table. Contains a raw color palette and consists of 256 24-bit RGB colour values.");
        return ext;
    }

    else if (strcmpm(ext, "ASE"))
    {
        strcpy(ext, "Adobe Swatch Exchange. Used by Adobe Photoshop, Illustrator, and InDesign.[10]");
        return ext;
    }

    else if (strcmpm(ext, "GPL"))
    {
        strcpy(ext, "GIMP palette file. Uses a text representation of color names and RGB values. Various open source graphical editors can read this format,[11] including GIMP, Inkscape, Krita,[12] KolourPaint, Scribus, CinePaint, and MyPaint.[13]");
        return ext;
    }

    else if (strcmpm(ext, "PAL"))
    {
        strcpy(ext, "Microsoft RIFF palette file");
        return ext;
    }

    else if (strcmpm(ext, "ICC, ICM"))
    {
        strcpy(ext, "Color profile conforming the specification of the ICC.");
        return ext;
    }

    else if (strcmpm(ext, "ART"))
    {
        strcpy(ext, "America Online proprietary format");
        return ext;
    }

    else if (strcmpm(ext, "BLP"))
    {
        strcpy(ext, "Blizzard Entertainment proprietary texture format");
        return ext;
    }

    else if (strcmpm(ext, "BMP"))
    {
        strcpy(ext, "Microsoft Windows Bitmap formatted image");
        return ext;
    }

    else if (strcmpm(ext, "BTI"))
    {
        strcpy(ext, "Nintendo proprietary texture format");
        return ext;
    }

    else if (strcmpm(ext, "CD5"))
    {
        strcpy(ext, "Chasys Draw IES image");
        return ext;
    }

    else if (strcmpm(ext, "CIT"))
    {
        strcpy(ext, "Intergraph is a monochrome bitmap format");
        return ext;
    }

    else if (strcmpm(ext, "CPT"))
    {
        strcpy(ext, "Corel PHOTO-PAINT image");
        return ext;
    }

    else if (strcmpm(ext, "CR2"))
    {
        strcpy(ext, "Canon camera raw format; photos have this on some Canon cameras if the quality RAW is selected in camera settings");
        return ext;
    }

    else if (strcmpm(ext, "CLIP"))
    {
        strcpy(ext, "CLIP STUDIO PAINT format");
        return ext;
    }

    else if (strcmpm(ext, "CPL"))
    {
        strcpy(ext, "Windows control panel file");
        return ext;
    }

    else if (strcmpm(ext, "DDS"))
    {
        strcpy(ext, "DirectX texture file");
        return ext;
    }

    else if (strcmpm(ext, "DIB"))
    {
        strcpy(ext, "Device-Independent Bitmap graphic");
        return ext;
    }

    else if (strcmpm(ext, "DjVu"))
    {
        strcpy(ext, "DjVu for scanned documents");
        return ext;
    }

    else if (strcmpm(ext, "EGT"))
    {
        strcpy(ext, "EGT Universal Document, used in EGT SmartSense to compress PNG files to yet a smaller file");
        return ext;
    }

    else if (strcmpm(ext, "Exif"))
    {
        strcpy(ext, "Exchangeable image file format (Exif) is a specification for the image format used by digital cameras");
        return ext;
    }

    else if (strcmpm(ext, "GIF"))
    {
        strcpy(ext, "CompuServe's Graphics Interchange Format");
        return ext;
    }

    else if (strcmpm(ext, "GRF"))
    {
        strcpy(ext, "Zebra Technologies proprietary format");
        return ext;
    }

    else if (strcmpm(ext, "ICNS"))
    {
        strcpy(ext, "format for icons in macOS. Contains bitmap images at multiple resolutions and bitdepths with alpha channel.");
        return ext;
    }

    else if (strcmpm(ext, "ICO"))
    {
        strcpy(ext, "a format used for icons in Microsoft Windows. Contains small bitmap images at multiple resolutions and bitdepths with 1-bit transparency or alpha channel.");
        return ext;
    }

    else if (strcmpm(ext, ".iff, .ilbm, .lbm"))
    {
        strcpy(ext, "IFF ILBM");
        return ext;
    }

    else if (strcmpm(ext, "JNG"))
    {
        strcpy(ext, "a single-frame MNG using JPEG compression and possibly an alpha channel");
        return ext;
    }

    else if (strcmpm(ext, "JPEG, JFIF, .jpg, .jpeg"))
    {
        strcpy(ext, "Joint Photographic Experts Group; a lossy image format widely used to display photographic images");
        return ext;
    }

    else if (strcmpm(ext, "JP2"))
    {
        strcpy(ext, "JPEG2000");
        return ext;
    }

    else if (strcmpm(ext, "JPS"))
    {
        strcpy(ext, "JPEG Stereo");
        return ext;
    }

    else if (strcmpm(ext, "KRA"))
    {
        strcpy(ext, "Krita image file");
        return ext;
    }

    else if (strcmpm(ext, "LBM"))
    {
        strcpy(ext, "Deluxe Paint image file");
        return ext;
    }

    else if (strcmpm(ext, "MAX"))
    {
        strcpy(ext, "ScanSoft PaperPort document");
        return ext;
    }

    else if (strcmpm(ext, "MIFF"))
    {
        strcpy(ext, "ImageMagick's native file format");
        return ext;
    }

    else if (strcmpm(ext, "MNG"))
    {
        strcpy(ext, "Multiple-image Network Graphics, the animated version of PNG");
        return ext;
    }

    else if (strcmpm(ext, "MSP"))
    {
        strcpy(ext, "a format used by old versions of Microsoft Paint; replaced by BMP in Microsoft Windows 3.0");
        return ext;
    }

    else if (strcmpm(ext, "NITF"))
    {
        strcpy(ext, "A U.S. Government standard commonly used in Intelligence systems");
        return ext;
    }

    else if (strcmpm(ext, "OTB"))
    {
        strcpy(ext, "Over The Air bitmap, a specification designed by Nokia for black and white images for mobile phones");
        return ext;
    }

    else if (strcmpm(ext, "PBM"))
    {
        strcpy(ext, "Portable bitmap");
        return ext;
    }

    else if (strcmpm(ext, "PC1"))
    {
        strcpy(ext, "Low resolution, compressed Degas picture file");
        return ext;
    }

    else if (strcmpm(ext, "PC2"))
    {
        strcpy(ext, "Medium resolution, compressed Degas picture file");
        return ext;
    }

    else if (strcmpm(ext, "PC3"))
    {
        strcpy(ext, "High resolution, compressed Degas picture file");
        return ext;
    }

    else if (strcmpm(ext, "PCF"))
    {
        strcpy(ext, "Pixel Coordination Format");
        return ext;
    }

    else if (strcmpm(ext, "PCX"))
    {
        strcpy(ext, "a lossless format used by ZSoft's PC Paint, popular for a time on DOS systems.");
        return ext;
    }

    else if (strcmpm(ext, "PDN"))
    {
        strcpy(ext, "Paint.NET image file");
        return ext;
    }

    else if (strcmpm(ext, "PGF"))
    {
        strcpy(ext, "Progressive Graphics File");
        return ext;
    }

    else if (strcmpm(ext, "PGM"))
    {
        strcpy(ext, "Portable graymap");
        return ext;
    }

    else if (strcmpm(ext, "PI1"))
    {
        strcpy(ext, "Low resolution, uncompressed Degas picture file");
        return ext;
    }

    else if (strcmpm(ext, "PI2"))
    {
        strcpy(ext, "Medium resolution, uncompressed Degas picture file; also Portrait Innovations encrypted image format");
        return ext;
    }

    else if (strcmpm(ext, "PI3"))
    {
        strcpy(ext, "High resolution, uncompressed Degas picture file");
        return ext;
    }

    else if (strcmpm(ext, "PICT, PCT"))
    {
        strcpy(ext, "Apple Macintosh PICT image");
        return ext;
    }

    else if (strcmpm(ext, "PNG"))
    {
        strcpy(ext, "Portable Network Graphic (lossless, recommended for display and edition of graphic images)");
        return ext;
    }

    else if (strcmpm(ext, "PNM"))
    {
        strcpy(ext, "Portable anymap graphic bitmap image");
        return ext;
    }

    else if (strcmpm(ext, "PNS"))
    {
        strcpy(ext, "PNG Stereo");
        return ext;
    }

    else if (strcmpm(ext, "PPM"))
    {
        strcpy(ext, "Portable Pixmap (Pixel Map) image");
        return ext;
    }

    else if (strcmpm(ext, ".procreate"))
    {
        strcpy(ext, "Procreate (software)’s drawing file");
        return ext;
    }

    else if (strcmpm(ext, "PSB"))
    {
        strcpy(ext, "Adobe Photoshop Big image file (for large files)");
        return ext;
    }

    else if (strcmpm(ext, "PSD, PDD"))
    {
        strcpy(ext, "Adobe Photoshop Drawing");
        return ext;
    }

    else if (strcmpm(ext, "PSP"))
    {
        strcpy(ext, "Paint Shop Pro image");
        return ext;
    }

    else if (strcmpm(ext, "PX"))
    {
        strcpy(ext, "Pixel image editor image file");
        return ext;
    }

    else if (strcmpm(ext, "PXM"))
    {
        strcpy(ext, "Pixelmator image file");
        return ext;
    }

    else if (strcmpm(ext, "PXR"))
    {
        strcpy(ext, "Pixar Image Computer image file");
        return ext;
    }

    else if (strcmpm(ext, "QFX"))
    {
        strcpy(ext, "QuickLink Fax image");
        return ext;
    }

    else if (strcmpm(ext, "RAW"))
    {
        strcpy(ext, "General term for minimally processed image data (acquired by a digital camera)");
        return ext;
    }

    else if (strcmpm(ext, "RLE"))
    {
        strcpy(ext, "a run-length encoding image");
        return ext;
    }

    else if (strcmpm(ext, "SCT"))
    {
        strcpy(ext, "Scitex Continuous Tone image file");
        return ext;
    }

    else if (strcmpm(ext, "SGI, RGB, INT, BW"))
    {
        strcpy(ext, "Silicon Graphics Image");
        return ext;
    }

    else if (strcmpm(ext, "TGA, .tga, .targa, .icb, .vda, .vst, .pix"))
    {
        strcpy(ext, "Truevision TGA (Targa) image");
        return ext;
    }

    else if (strcmpm(ext, "TIFF, .tif, .tiff"))
    {
        strcpy(ext, "Tagged Image File Format (usually lossless, but many variants exist, including lossy ones)");
        return ext;
    }

    else if (strcmpm(ext, "TIFF, EP, .tif, .tiff"))
    {
        strcpy(ext, "Tag Image File Format / Electronic Photography, ISO 12234-2; tends to be used as a basis for other formats rather than in its own right.");
        return ext;
    }

    else if (strcmpm(ext, "VTF"))
    {
        strcpy(ext, "Valve Texture Format");
        return ext;
    }

    else if (strcmpm(ext, "XBM"))
    {
        strcpy(ext, "X Window System Bitmap");
        return ext;
    }

    else if (strcmpm(ext, "XCF"))
    {
        strcpy(ext, "GIMP image (from Gimp's origin at the eXperimental Computing Facility of the University of California)");
        return ext;
    }

    else if (strcmpm(ext, "XPM"))
    {
        strcpy(ext, "X Window System Pixmap");
        return ext;
    }

    else if (strcmpm(ext, "ZIF"))
    {
        strcpy(ext, "Zoomable/Zoomify Image Format (a web-friendly, TIFF-based, zoomable image format)");
        return ext;
    }

    else if (strcmpm(ext, "3DV"))
    {
        strcpy(ext, "3-D wireframe graphics by Oscar Garcia");
        return ext;
    }

    else if (strcmpm(ext, "AMF"))
    {
        strcpy(ext, "Additive Manufacturing File Format");
        return ext;
    }

    else if (strcmpm(ext, "AWG"))
    {
        strcpy(ext, "Ability Draw");
        return ext;
    }

    else if (strcmpm(ext, "AI"))
    {
        strcpy(ext, "Adobe Illustrator Document");
        return ext;
    }

    else if (strcmpm(ext, "CGM"))
    {
        strcpy(ext, "Computer Graphics Metafile, an ISO Standard");
        return ext;
    }

    else if (strcmpm(ext, "CDR"))
    {
        strcpy(ext, "CorelDRAW Document");
        return ext;
    }

    else if (strcmpm(ext, "CMX"))
    {
        strcpy(ext, "CorelDRAW vector image");
        return ext;
    }

    else if (strcmpm(ext, "DP"))
    {
        strcpy(ext, "Drawing Program file for PERQ[14]");
        return ext;
    }

    else if (strcmpm(ext, "DRAWIO"))
    {
        strcpy(ext, "Diagrams.net offline diagram");
        return ext;
    }

    else if (strcmpm(ext, "DXF"))
    {
        strcpy(ext, "ASCII Drawing Interchange file Format, used in AutoCAD and other CAD-programs");
        return ext;
    }

    else if (strcmpm(ext, "E2D"))
    {
        strcpy(ext, "2-dimensional vector graphics used by the editor which is included in JFire");
        return ext;
    }

    else if (strcmpm(ext, "EGT"))
    {
        strcpy(ext, "EGT Universal Document, EGT Vector Draw images are used to draw vector to a website");
        return ext;
    }

    else if (strcmpm(ext, "EPS"))
    {
        strcpy(ext, "Encapsulated Postscript");
        return ext;
    }

    else if (strcmpm(ext, "FS"))
    {
        strcpy(ext, "FlexiPro file");
        return ext;
    }

    else if (strcmpm(ext, "GBR"))
    {
        strcpy(ext, "Gerber file");
        return ext;
    }

    else if (strcmpm(ext, "ODG"))
    {
        strcpy(ext, "OpenDocument Drawing");
        return ext;
    }

    else if (strcmpm(ext, "MOVIE.BYU"))
    {
        strcpy(ext, "3D Vector file for polygons, coordinates and more complex shapes");
        return ext;
    }

    else if (strcmpm(ext, "RenderMan"))
    {
        strcpy(ext, "Displays Shading in both 2D and 3D scapes");
        return ext;
    }

    else if (strcmpm(ext, "SVG"))
    {
        strcpy(ext, "Scalable Vector Graphics, employs XML");
        return ext;
    }

    else if (strcmpm(ext, "3DMLW"))
    {
        strcpy(ext, "Scene description languages (3D vector image formats)");
        return ext;
    }

    else if (strcmpm(ext, "STL"))
    {
        strcpy(ext, "STL: Stereo Lithographic data format (see STL (file format)) used by various CAD systems and stereo lithographic printing machines. See above.");
        return ext;
    }

    else if (strcmpm(ext, ".wrl"))
    {
        strcpy(ext, "Virtual Reality Modeling Language, VRML Uses this extension for the creation of 3D viewable web images.");
        return ext;
    }

    else if (strcmpm(ext, "X3D"))
    {
        strcpy(ext, "XML based file for communicating 3D graphics");
        return ext;
    }

    else if (strcmpm(ext, "SXD"))
    {
        strcpy(ext, "OpenOffice.org XML (obsolete) Drawing");
        return ext;
    }

    else if (strcmpm(ext, "TGAX"))
    {
        strcpy(ext, "Texture format used by Zwift");
        return ext;
    }

    else if (strcmpm(ext, "V2D"))
    {
        strcpy(ext, "voucher design used by the voucher management included in JFire");
        return ext;
    }

    else if (strcmpm(ext, "VDOC"))
    {
        strcpy(ext, "Vector format used in AnyCut, CutStorm, DrawCut, DragonCut, FutureDRAW, MasterCut, SignMaster, VinylMaster software by Future Corporation");
        return ext;
    }

    else if (strcmpm(ext, "VSD"))
    {
        strcpy(ext, "Vector format used by Microsoft Visio");
        return ext;
    }

    else if (strcmpm(ext, "VSDX"))
    {
        strcpy(ext, "Vector format used by MS Visio and opened by VSDX Annotator");
        return ext;
    }

    else if (strcmpm(ext, "VND"))
    {
        strcpy(ext, "Vision numeric Drawing file used in TypeEdit, Gravostyle.");
        return ext;
    }

    else if (strcmpm(ext, "WMF"))
    {
        strcpy(ext, "WMF: Windows Meta File");
        return ext;
    }

    else if (strcmpm(ext, "EMF"))
    {
        strcpy(ext, "EMF: Enhanced (Windows) MetaFile, an extension to WMF");
        return ext;
    }

    else if (strcmpm(ext, "ART"))
    {
        strcpy(ext, "Xara-Drawing (superseded by XAR)");
        return ext;
    }

    else if (strcmpm(ext, "XAR"))
    {
        strcpy(ext, "Xara-Drawing");
        return ext;
    }

    else if (strcmpm(ext, "3DMF"))
    {
        strcpy(ext, "QuickDraw 3D Metafile (.3dmf)");
        return ext;
    }

    else if (strcmpm(ext, "3DM"))
    {
        strcpy(ext, "OpenNURBS Initiative 3D Model (used by Rhinoceros 3D) (.3dm)");
        return ext;
    }

    else if (strcmpm(ext, "3MF"))
    {
        strcpy(ext, "Microsoft 3D Manufacturing Format (.3mf)[4]");
        return ext;
    }

    else if (strcmpm(ext, "3DS"))
    {
        strcpy(ext, "legacy 3D Studio Model (.3ds)");
        return ext;
    }

    else if (strcmpm(ext, "ABC"))
    {
        strcpy(ext, "Alembic (computer graphics)");
        return ext;
    }

    else if (strcmpm(ext, "AC"))
    {
        strcpy(ext, "AC3D Model (.ac)");
        return ext;
    }

    else if (strcmpm(ext, "AMF"))
    {
        strcpy(ext, "Additive Manufacturing File Format");
        return ext;
    }

    else if (strcmpm(ext, "AN8"))
    {
        strcpy(ext, "Anim8or Model (.an8)");
        return ext;
    }

    else if (strcmpm(ext, "AOI"))
    {
        strcpy(ext, "Art of Illusion Model (.aoi)");
        return ext;
    }

    else if (strcmpm(ext, "ASM"))
    {
        strcpy(ext, "PTC Creo assembly (.asm)");
        return ext;
    }

    else if (strcmpm(ext, "B3D"))
    {
        strcpy(ext, "Blitz3D Model (.b3d)");
        return ext;
    }

    else if (strcmpm(ext, "BLEND"))
    {
        strcpy(ext, "Blender (.blend)");
        return ext;
    }

    else if (strcmpm(ext, "BLOCK"))
    {
        strcpy(ext, "Blender encrypted blend files (.block)");
        return ext;
    }

    else if (strcmpm(ext, "BMD3"))
    {
        strcpy(ext, "Nintendo GameCube first-party J3D proprietary model format (.bmd)");
        return ext;
    }

    else if (strcmpm(ext, "BDL4"))
    {
        strcpy(ext, "Nintendo GameCube and Wii first-party J3D proprietary model format (2002, 2006-2010) (.bdl)");
        return ext;
    }

    else if (strcmpm(ext, "BRRES"))
    {
        strcpy(ext, "Nintendo Wii first-party proprietary model format 2010+ (.brres)");
        return ext;
    }

    else if (strcmpm(ext, "BFRES"))
    {
        strcpy(ext, "Nintendo Wii U and later Switch first-party proprietary model format");
        return ext;
    }

    else if (strcmpm(ext, "C4D"))
    {
        strcpy(ext, "Cinema 4D (.c4d)");
        return ext;
    }

    else if (strcmpm(ext, "Cal3D"))
    {
        strcpy(ext, "Cal3D (.cal3d)");
        return ext;
    }

    else if (strcmpm(ext, "CCP4"))
    {
        strcpy(ext, "X-ray crystallography voxels (electron density)");
        return ext;
    }

    else if (strcmpm(ext, "CFL"))
    {
        strcpy(ext, "Compressed File Library (.cfl)");
        return ext;
    }

    else if (strcmpm(ext, "COB"))
    {
        strcpy(ext, "Caligari Object (.cob)");
        return ext;
    }

    else if (strcmpm(ext, "CORE3D"))
    {
        strcpy(ext, "Coreona 3D Coreona 3D Virtual File(.core3d)");
        return ext;
    }

    else if (strcmpm(ext, "CTM"))
    {
        strcpy(ext, "OpenCTM (.ctm)");
        return ext;
    }

    else if (strcmpm(ext, "DAE"))
    {
        strcpy(ext, "COLLADA (.dae)");
        return ext;
    }

    else if (strcmpm(ext, "DFF"))
    {
        strcpy(ext, "RenderWare binary stream, commonly used by Grand Theft Auto III-era games as well as other RenderWare titles");
        return ext;
    }

    else if (strcmpm(ext, "DPM"))
    {
        strcpy(ext, "deepMesh (.dpm)");
        return ext;
    }

    else if (strcmpm(ext, "DTS"))
    {
        strcpy(ext, "Torque Game Engine (.dts)");
        return ext;
    }

    else if (strcmpm(ext, "EGG"))
    {
        strcpy(ext, "Panda3D Engine");
        return ext;
    }

    else if (strcmpm(ext, "FACT"))
    {
        strcpy(ext, "Electric Image (.fac)");
        return ext;
    }

    else if (strcmpm(ext, "FBX"))
    {
        strcpy(ext, "Autodesk FBX (.fbx)");
        return ext;
    }

    else if (strcmpm(ext, "G"))
    {
        strcpy(ext, "BRL-CAD geometry (.g)");
        return ext;
    }

    else if (strcmpm(ext, "GLB"))
    {
        strcpy(ext, "a binary form of glTF required to be loaded in Facebook 3D Posts. (.glb)");
        return ext;
    }

    else if (strcmpm(ext, "GLM"))
    {
        strcpy(ext, "Ghoul Mesh (.glm)");
        return ext;
    }

    else if (strcmpm(ext, "glTF"))
    {
        strcpy(ext, "the JSON-based standard developed by Khronos Group (.gltf)");
        return ext;
    }

    else if (strcmpm(ext, ".hec"))
    {
        strcpy(ext, "Hector Game Engine - Flatspace model format");
        return ext;
    }

    else if (strcmpm(ext, "IO"))
    {
        strcpy(ext, "Bricklink Stud.io 2.0 Model File (.io)");
        return ext;
    }

    else if (strcmpm(ext, "IOB"))
    {
        strcpy(ext, "Imagine (3D modeling software) (.iob)");
        return ext;
    }

    else if (strcmpm(ext, "JAS"))
    {
        strcpy(ext, "Cheetah 3D file (.jas)");
        return ext;
    }

    else if (strcmpm(ext, "JMESH"))
    {
        strcpy(ext, "Universal mesh data exchange file based on JMesh specification (.jmsh for text/JSON based, .bmsh for binary/UBJSON based)");
        return ext;
    }

    else if (strcmpm(ext, "LDR"))
    {
        strcpy(ext, "LDraw Model File (.ldr)");
        return ext;
    }

    else if (strcmpm(ext, "LWO"))
    {
        strcpy(ext, "Lightwave Object (.lwo)");
        return ext;
    }

    else if (strcmpm(ext, "LWS"))
    {
        strcpy(ext, "Lightwave Scene (.lws)");
        return ext;
    }

    else if (strcmpm(ext, "LXF"))
    {
        strcpy(ext, "LEGO Digital Designer Model file (.lxf)");
        return ext;
    }

    else if (strcmpm(ext, "LXO"))
    {
        strcpy(ext, "Luxology Modo (software) file (.lxo)");
        return ext;
    }

    else if (strcmpm(ext, "M3D"))
    {
        strcpy(ext, "Model3D, universal, engine-neutral format (.m3d)");
        return ext;
    }

    else if (strcmpm(ext, "MA"))
    {
        strcpy(ext, "Autodesk Maya ASCII File (.ma)");
        return ext;
    }

    else if (strcmpm(ext, "MAX"))
    {
        strcpy(ext, "Autodesk 3D Studio Max file (.max)");
        return ext;
    }

    else if (strcmpm(ext, "MB"))
    {
        strcpy(ext, "Autodesk Maya Binary File (.mb)");
        return ext;
    }

    else if (strcmpm(ext, "MPD"))
    {
        strcpy(ext, "LDraw Multi-Part Document Model File (.mpd)");
        return ext;
    }

    else if (strcmpm(ext, "MD2"))
    {
        strcpy(ext, "MD2: Quake 2 model format (.md2)");
        return ext;
    }

    else if (strcmpm(ext, "MD3"))
    {
        strcpy(ext, "MD3: Quake 3 model format (.md3)");
        return ext;
    }

    else if (strcmpm(ext, "MD5"))
    {
        strcpy(ext, "MD5: Doom 3 model format (.md5)");
        return ext;
    }

    else if (strcmpm(ext, "MDX"))
    {
        strcpy(ext, "Blizzard Entertainment's own model format (.mdx)");
        return ext;
    }

    else if (strcmpm(ext, "MESH"))
    {
        strcpy(ext, "New York University(.m)");
        return ext;
    }

    else if (strcmpm(ext, "MESH"))
    {
        strcpy(ext, "Meshwork Model (.mesh)");
        return ext;
    }

    else if (strcmpm(ext, "MIOBJECT"))
    {
        strcpy(ext, "Mine-Imator object file (.miobject)");
        return ext;
    }

    else if (strcmpm(ext, "MIPARTICLE"))
    {
        strcpy(ext, "Mine-Imator particle file (.miparticle)");
        return ext;
    }

    else if (strcmpm(ext, "MIMODEL"))
    {
        strcpy(ext, "Mine-Imator model file (.mimodel)");
        return ext;
    }

    else if (strcmpm(ext, "MM3D"))
    {
        strcpy(ext, "Misfit Model 3d (.mm3d)");
        return ext;
    }

    else if (strcmpm(ext, "MPO"))
    {
        strcpy(ext, "Multi-Picture Object - This JPEG standard is used for 3d images, as with the Nintendo 3DS");
        return ext;
    }

    else if (strcmpm(ext, "MRC"))
    {
        strcpy(ext, "MRC: voxels in cryo-electron microscopy");
        return ext;
    }

    else if (strcmpm(ext, "NIF"))
    {
        strcpy(ext, "Gamebryo NetImmerse File (.nif)");
        return ext;
    }

    else if (strcmpm(ext, "OBJ"))
    {
        strcpy(ext, "Wavefront .obj file (.obj)");
        return ext;
    }

    else if (strcmpm(ext, "OFF"))
    {
        strcpy(ext, "OFF Object file format (.off)");
        return ext;
    }

    else if (strcmpm(ext, "OGEX"))
    {
        strcpy(ext, "Open Game Engine Exchange (OpenGEX) format (.ogex)");
        return ext;
    }

    else if (strcmpm(ext, "PLY"))
    {
        strcpy(ext, "PLY: Polygon File Format / Stanford Triangle Format (.ply)");
        return ext;
    }

    else if (strcmpm(ext, "PRC"))
    {
        strcpy(ext, "Adobe PRC (embedded in PDF files)");
        return ext;
    }

    else if (strcmpm(ext, "PRT"))
    {
        strcpy(ext, "PTC Creo part (.prt)");
        return ext;
    }

    else if (strcmpm(ext, "POV"))
    {
        strcpy(ext, "POV-Ray document (.pov)");
        return ext;
    }

    else if (strcmpm(ext, "R3D"))
    {
        strcpy(ext, "Realsoft 3D (Real-3D) (.r3d)");
        return ext;
    }

    else if (strcmpm(ext, "RWX"))
    {
        strcpy(ext, "RenderWare Object (.rwx)");
        return ext;
    }

    else if (strcmpm(ext, "SIA"))
    {
        strcpy(ext, "Nevercenter Silo Object (.sia)");
        return ext;
    }

    else if (strcmpm(ext, "SIB"))
    {
        strcpy(ext, "Nevercenter Silo Object (.sib)");
        return ext;
    }

    else if (strcmpm(ext, "SKP"))
    {
        strcpy(ext, "Google Sketchup file (.skp)");
        return ext;
    }

    else if (strcmpm(ext, "SLDASM"))
    {
        strcpy(ext, "SolidWorks Assembly Document (.sldasm)");
        return ext;
    }

    else if (strcmpm(ext, "SLDPRT"))
    {
        strcpy(ext, "SolidWorks Part Document (.sldprt)");
        return ext;
    }

    else if (strcmpm(ext, "SMD"))
    {
        strcpy(ext, "Valve Studiomdl Data format (.smd)");
        return ext;
    }

    else if (strcmpm(ext, "U3D"))
    {
        strcpy(ext, "Universal 3D format (.u3d)");
        return ext;
    }

    else if (strcmpm(ext, "USD"))
    {
        strcpy(ext, "Universal Scene Description (.usd)");
        return ext;
    }

    else if (strcmpm(ext, "USDA"))
    {
        strcpy(ext, "Universal Scene Description, human-readable text format (.usda)");
        return ext;
    }

    else if (strcmpm(ext, "USDC"))
    {
        strcpy(ext, "Universal Scene Description, binary format (.usdc)");
        return ext;
    }

    else if (strcmpm(ext, "USDZ"))
    {
        strcpy(ext, "Universal Scene Description, a zip-compressed container (.usdz)");
        return ext;
    }

    else if (strcmpm(ext, "VIM"))
    {
        strcpy(ext, "Revizto visual information model format (.vimproj)");
        return ext;
    }

    else if (strcmpm(ext, "VRML97"))
    {
        strcpy(ext, "VRML Virtual reality modeling language (.wrl)");
        return ext;
    }

    else if (strcmpm(ext, "VUE"))
    {
        strcpy(ext, "Vue scene file (.vue)");
        return ext;
    }

    else if (strcmpm(ext, "VWX"))
    {
        strcpy(ext, "Vectorworks (.vwx)");
        return ext;
    }

    else if (strcmpm(ext, "WINGS"))
    {
        strcpy(ext, "Wings3D (.wings)");
        return ext;
    }

    else if (strcmpm(ext, "W3D"))
    {
        strcpy(ext, "Westwood 3D Model (.w3d)");
        return ext;
    }

    else if (strcmpm(ext, "X"))
    {
        strcpy(ext, "DirectX 3D Model (.x)");
        return ext;
    }

    else if (strcmpm(ext, "X3D"))
    {
        strcpy(ext, "Extensible 3D (.x3d)");
        return ext;
    }

    else if (strcmpm(ext, "Z3D"))
    {
        strcpy(ext, "Zmodeler (.z3d)");
        return ext;
    }

    else if (strcmpm(ext, "ZBMX"))
    {
        strcpy(ext, "Mecabricks Blender Add-On (.zbmx)");
        return ext;
    }

    else if (strcmpm(ext, "Alias"))
    {
        strcpy(ext, "Alias (Mac OS)");
        return ext;
    }

    else if (strcmpm(ext, "JNLP"))
    {
        strcpy(ext, "Java Network Launching Protocol, an XML file used by Java Web Start for starting Java applets over the Internet");
        return ext;
    }

    else if (strcmpm(ext, "LNK"))
    {
        strcpy(ext, "binary-format file shortcut in Microsoft Windows 95 and later");
        return ext;
    }

    else if (strcmpm(ext, "APPREF-MS"))
    {
        strcpy(ext, "File shortcut format used by ClickOnce");
        return ext;
    }

    else if (strcmpm(ext, "NAL"))
    {
        strcpy(ext, "ZENworks Instant shortcut (opens a .EXE not on the C:/ )");
        return ext;
    }

    else if (strcmpm(ext, "URL"))
    {
        strcpy(ext, "INI file pointing to a URL bookmarks/Internet shortcut in Microsoft Windows");
        return ext;
    }

    else if (strcmpm(ext, "WEBLOC"))
    {
        strcpy(ext, "Property list file pointing to a URL bookmarks/Internet shortcut in macOS");
        return ext;
    }

    else if (strcmpm(ext, "SYM"))
    {
        strcpy(ext, "Symbolic link");
        return ext;
    }

    else if (strcmpm(ext, ".desktop"))
    {
        strcpy(ext, "Desktop entry on Linux Desktop environments");
        return ext;
    }

    else if (strcmpm(ext, "Harwell-Boeing"))
    {
        strcpy(ext, "a file format designed to store sparse matrices");
        return ext;
    }

    else if (strcmpm(ext, "MML"))
    {
        strcpy(ext, "MathML - Mathematical Markup Language");
        return ext;
    }

    else if (strcmpm(ext, "ODF"))
    {
        strcpy(ext, "OpenDocument Math Formula");
        return ext;
    }

    else if (strcmpm(ext, "SXM"))
    {
        strcpy(ext, "OpenOffice.org XML (obsolete) Math Formula");
        return ext;
    }

    else if (strcmpm(ext, "8BF"))
    {
        strcpy(ext, "files plugins for some photo editing programs including Adobe Photoshop, Paint Shop Pro, GIMP and Helicon Filter.");
        return ext;
    }

    else if (strcmpm(ext, ".a"))
    {
        strcpy(ext, "a static library on Unix-like systems");
        return ext;
    }

    else if (strcmpm(ext, ".a"))
    {
        strcpy(ext, "Objective C native static library");
        return ext;
    }

    else if (strcmpm(ext, "a.out"))
    {
        strcpy(ext, "(no suffix for executable image, .o for object files, .so for shared object files) classic UNIX object format, now often superseded by ELF");
        return ext;
    }

    else if (strcmpm(ext, "APK"))
    {
        strcpy(ext, "Android Application Package");
        return ext;
    }

    else if (strcmpm(ext, "APP"))
    {
        strcpy(ext, "A folder found on macOS systems containing program code and resources, appearing as one file.");
        return ext;
    }

    else if (strcmpm(ext, "BAC"))
    {
        strcpy(ext, "an executable image for the RSTS/E system, created using the BASIC-PLUS COMPILE command[15]");
        return ext;
    }

    else if (strcmpm(ext, "BPL"))
    {
        strcpy(ext, "a Win32 PE file created with Borland Delphi or C++Builder containing a package.");
        return ext;
    }

    else if (strcmpm(ext, "Bundle"))
    {
        strcpy(ext, "a Macintosh plugin created with Xcode or make which holds executable code, data files, and folders for that code.");
        return ext;
    }

    else if (strcmpm(ext, ".class"))
    {
        strcpy(ext, "Compiled Java bytecode");
        return ext;
    }

    else if (strcmpm(ext, "COFF"))
    {
        strcpy(ext, "(no suffix for executable image, .o for object files) UNIX Common Object File Format, now often superseded by ELF");
        return ext;
    }

    else if (strcmpm(ext, "COM"))
    {
        strcpy(ext, "Simple executable format used by CP/M and DOS.");
        return ext;
    }

    else if (strcmpm(ext, "DCU"))
    {
        strcpy(ext, "Delphi compiled unit");
        return ext;
    }

    else if (strcmpm(ext, "DLL"))
    {
        strcpy(ext, "Dynamic library used in Windows and OS/2 to store data, resources and code.");
        return ext;
    }

    else if (strcmpm(ext, "DOL"))
    {
        strcpy(ext, "the format used by the GameCube and Wii, short for Dolphin, which was the codename of the GameCube.");
        return ext;
    }

    else if (strcmpm(ext, ".EAR"))
    {
        strcpy(ext, "archives of Java enterprise applications");
        return ext;
    }

    else if (strcmpm(ext, "ELF"))
    {
        strcpy(ext, "(no suffix for executable image, .o for object files, .so for shared object files) used in many modern Unix and Unix-like systems, including Solaris, other System V Release 4 derivatives, Linux, and BSD)");
        return ext;
    }

    else if (strcmpm(ext, ".exe"))
    {
        strcpy(ext, "DOS executable (.exe: used in DOS)");
        return ext;
    }

    else if (strcmpm(ext, ".EXE"))
    {
        strcpy(ext, "New Executable (used in multitasking ('European') MS-DOS 4.0, 16-bit Microsoft Windows, and OS/2)");
        return ext;
    }

    else if (strcmpm(ext, ".EXE"))
    {
        strcpy(ext, "Portable Executable used in Microsoft Windows and some other systems");
        return ext;
    }

    else if (strcmpm(ext, ".ipa, .IPA"))
    {
        strcpy(ext, "file extension for apple IOS application executable file. Another form of zip file.");
        return ext;
    }

    else if (strcmpm(ext, ".JAR"))
    {
        strcpy(ext, "archives of Java class files");
        return ext;
    }

    else if (strcmpm(ext, "JEFF"))
    {
        strcpy(ext, "a file format allowing execution directly from static memory[16]");
        return ext;
    }

    else if (strcmpm(ext, ".ko"))
    {
        strcpy(ext, "Loadable kernel module");
        return ext;
    }

    else if (strcmpm(ext, "LIB"))
    {
        strcpy(ext, "a static library on Microsoft platforms");
        return ext;
    }

    else if (strcmpm(ext, "LIST"))
    {
        strcpy(ext, "variable list");
        return ext;
    }

    else if (strcmpm(ext, "Mach-O"))
    {
        strcpy(ext, "(no suffix for executable image, .o for object files, .dylib and .bundle for shared object files) Mach-based systems, notably native format of macOS, iOS, watchOS, and tvOS");
        return ext;
    }

    else if (strcmpm(ext, ".NLM"))
    {
        strcpy(ext, "NetWare Loadable Module the native 32-bit binaries compiled for Novell's NetWare Operating System (versions 3 and newer)");
        return ext;
    }

    else if (strcmpm(ext, ".o"))
    {
        strcpy(ext, "un-linked object files directly from the compiler");
        return ext;
    }

    else if (strcmpm(ext, "OBJ"))
    {
        strcpy(ext, "object file on Windows");
        return ext;
    }

    else if (strcmpm(ext, "RLL"))
    {
        strcpy(ext, "used in Microsoft operating systems together with a DLL file to store program resources");
        return ext;
    }

    else if (strcmpm(ext, ".s1es"))
    {
        strcpy(ext, "Executable used for S1ES learning system.");
        return ext;
    }

    else if (strcmpm(ext, ".so"))
    {
        strcpy(ext, "shared library, typically ELF");
        return ext;
    }

    else if (strcmpm(ext, ".VAP"))
    {
        strcpy(ext, "Value Added Process the native 16-bit binaries compiled for Novell's NetWare Operating System (version 2, NetWare 286, Advanced NetWare, etc.)");
        return ext;
    }

    else if (strcmpm(ext, "WAR, .WAR"))
    {
        strcpy(ext, ".WAR are archives of Java Web applications");
        return ext;
    }

    else if (strcmpm(ext, ".XAP"))
    {
        strcpy(ext, "Windows Phone package");
        return ext;
    }

    else if (strcmpm(ext, "XBE"))
    {
        strcpy(ext, "XBE is Xbox executable");
        return ext;
    }

    else if (strcmpm(ext, "XCOFF"))
    {
        strcpy(ext, "(no suffix for executable image, .o for object files, .a for shared object files) extended COFF, used in AIX");
        return ext;
    }

    else if (strcmpm(ext, "XEX"))
    {
        strcpy(ext, "XEX is Xbox 360 executable");
        return ext;
    }

    else if (strcmpm(ext, ".XPI"))
    {
        strcpy(ext, "PKZIP archive that can be run by Mozilla web browsers to install software.");
        return ext;
    }

    else if (strcmpm(ext, ".OCX"))
    {
        strcpy(ext, ".OCX are Object Control extensions");
        return ext;
    }

    else if (strcmpm(ext, ".TLB"))
    {
        strcpy(ext, ".TLB are Windows Type Library");
        return ext;
    }

    else if (strcmpm(ext, ".VBX"))
    {
        strcpy(ext, ".VBX are Visual Basic extensions");
        return ext;
    }

    else if (strcmpm(ext, "DVI"))
    {
        strcpy(ext, "DVI are Device independent format");
        return ext;
    }

    else if (strcmpm(ext, ".egt"))
    {
        strcpy(ext, "Universal Document can be used to store CSS type styles");
        return ext;
    }

    else if (strcmpm(ext, "PLD"))
    {
        strcpy(ext, "PLD (Need to be added!!!)");
        return ext;
    }

    else if (strcmpm(ext, "PCL"))
    {
        strcpy(ext, "PCL (Need to be added!!!)");
        return ext;
    }

    else if (strcmpm(ext, "PDF"))
    {
        strcpy(ext, "PDF are Portable Document Format");
        return ext;
    }

    else if (strcmpm(ext, ".ps, .ps, .gz"))
    {
        strcpy(ext, "PostScript (Need to be added!!!)");
        return ext;
    }

    else if (strcmpm(ext, "SNP"))
    {
        strcpy(ext, "SNP are Microsoft Access Report Snapshot");
        return ext;
    }

    else if (strcmpm(ext, "XPS"))
    {
        strcpy(ext, "XPS");
        return ext;
    }

    else if (strcmpm(ext, "XSL-FO"))
    {
        strcpy(ext, "XSL-FO (Formatting Objects)");
        return ext;
    }

    else if (strcmpm(ext, "CSS"))
    {
        strcpy(ext, "CSS are Cascading Style Sheets");
        return ext;
    }

    else if (strcmpm(ext, ".xslt, .xsl"))
    {
        strcpy(ext, "XML Style Sheet");
        return ext;
    }

    else if (strcmpm(ext, ".tpl"))
    {
        strcpy(ext, "Web template");
        return ext;
    }

    else if (strcmpm(ext, "MNB"))
    {
        strcpy(ext, "MyInfo notebook");
        return ext;
    }

    else if (strcmpm(ext, "MSG"))
    {
        strcpy(ext, "Microsoft Outlook task manager");
        return ext;
    }

    else if (strcmpm(ext, "ORG"))
    {
        strcpy(ext, "Lotus Organizer PIM package");
        return ext;
    }

    else if (strcmpm(ext, "ORG"))
    {
        strcpy(ext, "Emacs Org-Mode Mindmanager, contacts, calendar, email-integration");
        return ext;
    }

    else if (strcmpm(ext, "PST, OST"))
    {
        strcpy(ext, "Microsoft Outlook email communication");
        return ext;
    }

    else if (strcmpm(ext, "SC2"))
    {
        strcpy(ext, "Microsoft Schedule+ calendar");
        return ext;
    }

    else if (strcmpm(ext, "GSLIDES"))
    {
        strcpy(ext, "Google Drive Presentation");
        return ext;
    }

    else if (strcmpm(ext, "KEY, KEYNOTE"))
    {
        strcpy(ext, "Apple Keynote Presentation");
        return ext;
    }

    else if (strcmpm(ext, "NB"))
    {
        strcpy(ext, "Mathematica Slideshow");
        return ext;
    }

    else if (strcmpm(ext, "NBP"))
    {
        strcpy(ext, "Mathematica Player slideshow");
        return ext;
    }

    else if (strcmpm(ext, "ODP"))
    {
        strcpy(ext, "OpenDocument Presentation");
        return ext;
    }

    else if (strcmpm(ext, "OTP"))
    {
        strcpy(ext, "OpenDocument Presentation template");
        return ext;
    }

    else if (strcmpm(ext, "PEZ"))
    {
        strcpy(ext, "Prezi Desktop Presentation");
        return ext;
    }

    else if (strcmpm(ext, "POT"))
    {
        strcpy(ext, "Microsoft PowerPoint template");
        return ext;
    }

    else if (strcmpm(ext, "PPS"))
    {
        strcpy(ext, "Microsoft PowerPoint Show");
        return ext;
    }

    else if (strcmpm(ext, "PPT"))
    {
        strcpy(ext, "Microsoft PowerPoint Presentation");
        return ext;
    }

    else if (strcmpm(ext, "PPTX"))
    {
        strcpy(ext, "Office Open XML Presentation");
        return ext;
    }

    else if (strcmpm(ext, "PRZ"))
    {
        strcpy(ext, "Lotus Freelance Graphics");
        return ext;
    }

    else if (strcmpm(ext, "SDD"))
    {
        strcpy(ext, "StarOffice's StarImpress");
        return ext;
    }

    else if (strcmpm(ext, "SHF"))
    {
        strcpy(ext, "ThinkFree Show");
        return ext;
    }

    else if (strcmpm(ext, "SHOW"))
    {
        strcpy(ext, "Haansoft(Hancom) Presentation software document");
        return ext;
    }

    else if (strcmpm(ext, "SHW"))
    {
        strcpy(ext, "Corel Presentations slide show creation");
        return ext;
    }

    else if (strcmpm(ext, "SLP"))
    {
        strcpy(ext, "Logix-4D Manager Show Control Project");
        return ext;
    }

    else if (strcmpm(ext, "SSPSS"))
    {
        strcpy(ext, "SongShow Plus Slide Show");
        return ext;
    }

    else if (strcmpm(ext, "STI"))
    {
        strcpy(ext, "OpenOffice.org XML (obsolete) Presentation template");
        return ext;
    }

    else if (strcmpm(ext, "SXI"))
    {
        strcpy(ext, "OpenOffice.org XML (obsolete) Presentation");
        return ext;
    }

    else if (strcmpm(ext, "THMX"))
    {
        strcpy(ext, "Microsoft PowerPoint theme template");
        return ext;
    }

    else if (strcmpm(ext, "WATCH"))
    {
        strcpy(ext, "Dataton Watchout Presentation");
        return ext;
    }

    else if (strcmpm(ext, "MPP"))
    {
        strcpy(ext, "Microsoft Project");
        return ext;
    }

    else if (strcmpm(ext, "bib"))
    {
        strcpy(ext, "BibTeX");
        return ext;
    }

    else if (strcmpm(ext, "enl"))
    {
        strcpy(ext, "EndNote");
        return ext;
    }

    else if (strcmpm(ext, "ris"))
    {
        strcpy(ext, "Research Information Systems RIS (file format)");
        return ext;
    }

    else if (strcmpm(ext, ".fits"))
    {
        strcpy(ext, "FITS (Flexible Image Transport System) standard data format for astronomy");
        return ext;
    }

    else if (strcmpm(ext, "Silo"))
    {
        strcpy(ext, "Silo, a storage format for visualization developed at Lawrence Livermore National Laboratory");
        return ext;
    }

    else if (strcmpm(ext, "SPC"))
    {
        strcpy(ext, "SPC, spectroscopic data");
        return ext;
    }

    else if (strcmpm(ext, "EAS3"))
    {
        strcpy(ext, "binary format for structured data");
        return ext;
    }

    else if (strcmpm(ext, "EOSSA"))
    {
        strcpy(ext, "Electro-Optic Space Situational Awareness format");
        return ext;
    }

    else if (strcmpm(ext, "OST"))
    {
        strcpy(ext, "(Open Spatio-Temporal) extensible, mainly images with related data, or just pure data; meant as an open alternative for microscope images");
        return ext;
    }

    else if (strcmpm(ext, "CCP4"))
    {
        strcpy(ext, "CCP4, X-ray crystallography voxels (electron density)");
        return ext;
    }

    else if (strcmpm(ext, "MRC"))
    {
        strcpy(ext, "MRC, voxels in cryo-electron microscopy");
        return ext;
    }

    else if (strcmpm(ext, "HITRAN"))
    {
        strcpy(ext, "spectroscopic data with one optical/infrared transition per line in the ASCII file (.hit)");
        return ext;
    }

    else if (strcmpm(ext, ".root"))
    {
        strcpy(ext, "hierarchical platform-independent compressed binary format used by ROOT");
        return ext;
    }

    else if (strcmpm(ext, "SDF"))
    {
        strcpy(ext, "Simple Data Format (SDF), a platform-independent, precision-preserving binary data I/O format capable of handling large, multi-dimensional arrays.");
        return ext;
    }

    else if (strcmpm(ext, "MYD"))
    {
        strcpy(ext, "Everfine LEDSpec software file for LED measurements");
        return ext;
    }

    else if (strcmpm(ext, "CSDM"))
    {
        strcpy(ext, "(Core Scientific Dataset Model) model for multi-dimensional and correlated datasets from various spectroscopies, diffraction, microscopy, and imaging techniques (.csdf, .csdfe).[17]");
        return ext;
    }

    else if (strcmpm(ext, "NetCDF"))
    {
        strcpy(ext, "Network common data format");
        return ext;
    }

    else if (strcmpm(ext, "HDR, HDF, h4, h5"))
    {
        strcpy(ext, "Hierarchical Data Format");
        return ext;
    }

    else if (strcmpm(ext, "SDXF"))
    {
        strcpy(ext, "SDXF, (Structured Data Exchange Format)");
        return ext;
    }

    else if (strcmpm(ext, "CDF"))
    {
        strcpy(ext, "Common Data Format");
        return ext;
    }

    else if (strcmpm(ext, "CGNS"))
    {
        strcpy(ext, "CGNS, CFD General Notation System");
        return ext;
    }

    else if (strcmpm(ext, "FMF"))
    {
        strcpy(ext, "Full-Metadata Format");
        return ext;
    }

    else if (strcmpm(ext, "GRIB"))
    {
        strcpy(ext, "Grid in Binary, WMO format for weather model data");
        return ext;
    }

    else if (strcmpm(ext, "BUFR"))
    {
        strcpy(ext, "WMO format for weather observation data");
        return ext;
    }

    else if (strcmpm(ext, "PP"))
    {
        strcpy(ext, "UK Met Office format for weather model data");
        return ext;
    }

    else if (strcmpm(ext, "NASA-Ames"))
    {
        strcpy(ext, "Simple text format for observation data. First used in aircraft studies of the atmosphere.");
        return ext;
    }

    else if (strcmpm(ext, "CML"))
    {
        strcpy(ext, "Chemical Markup Language (CML) (.cml)");
        return ext;
    }

    else if (strcmpm(ext, ".mol, .sd, .sdf"))
    {
        strcpy(ext, "Chemical table file (CTab)");
        return ext;
    }

    else if (strcmpm(ext, ".dx, .jdx"))
    {
        strcpy(ext, "Joint Committee on Atomic and Molecular Physical Data (JCAMP)");
        return ext;
    }

    else if (strcmpm(ext, ".smi"))
    {
        strcpy(ext, "Simplified molecular input line entry specification (SMILES)");
        return ext;
    }

    else if (strcmpm(ext, ".g6, .s6"))
    {
        strcpy(ext, "graph6, sparse6, ASCII encoding of Adjacency matrices");
        return ext;
    }

    else if (strcmpm(ext, "AB1"))
    {
        strcpy(ext, "In DNA sequencing, chromatogram files used by instruments from Applied Biosystems");
        return ext;
    }

    else if (strcmpm(ext, "ACE"))
    {
        strcpy(ext, "A sequence assembly format");
        return ext;
    }

    else if (strcmpm(ext, "ASN.1"))
    {
        strcpy(ext, "Abstract Syntax Notation One, is an International Standards Organization (ISO) data representation format used to achieve interoperability between platforms. NCBI uses ASN.1 for the storage and retrieval of data such as nucleotide and protein sequences, structures, genomes, and PubMed records.");
        return ext;
    }

    else if (strcmpm(ext, "BAM"))
    {
        strcpy(ext, "Binary Alignment/Map format (compressed SAM format)");
        return ext;
    }

    else if (strcmpm(ext, "BCF"))
    {
        strcpy(ext, "Binary compressed VCF format");
        return ext;
    }

    else if (strcmpm(ext, "BED"))
    {
        strcpy(ext, "The browser extensible display format is used for describing genes and other features of DNA sequences");
        return ext;
    }

    else if (strcmpm(ext, "CAF"))
    {
        strcpy(ext, "Common Assembly Format for sequence assembly");
        return ext;
    }

    else if (strcmpm(ext, "CRAM"))
    {
        strcpy(ext, "compressed file format for storing biological sequences aligned to a reference sequence");
        return ext;
    }

    else if (strcmpm(ext, "DDBJ"))
    {
        strcpy(ext, "The flatfile format used by the DDBJ to represent database records for nucleotide and peptide sequences from DDBJ databases.");
        return ext;
    }

    else if (strcmpm(ext, "EMBL"))
    {
        strcpy(ext, "The flatfile format used by the EMBL to represent database records for nucleotide and peptide sequences from EMBL databases.");
        return ext;
    }

    else if (strcmpm(ext, "FASTA"))
    {
        strcpy(ext, "The FASTA format, for sequence data. Sometimes also given as FNA or FAA (Fasta Nucleic Acid or Fasta Amino Acid).");
        return ext;
    }

    else if (strcmpm(ext, "FASTQ"))
    {
        strcpy(ext, "The FASTQ format, for sequence data with quality. Sometimes also given as QUAL.");
        return ext;
    }

    else if (strcmpm(ext, "GCPROJ"))
    {
        strcpy(ext, "The Genome Compiler project. Advanced format for genetic data to be designed, shared and visualized.");
        return ext;
    }

    else if (strcmpm(ext, "GenBank"))
    {
        strcpy(ext, "The flatfile format used by the NCBI to represent database records for nucleotide and peptide sequences from the GenBank and RefSeq databases");
        return ext;
    }

    else if (strcmpm(ext, "GFF"))
    {
        strcpy(ext, "The General feature format is used to describe genes and other features of DNA, RNA, and protein sequences");
        return ext;
    }

    else if (strcmpm(ext, "GTF"))
    {
        strcpy(ext, "The Gene transfer format is used to hold information about gene structure");
        return ext;
    }

    else if (strcmpm(ext, "MAF"))
    {
        strcpy(ext, "The Multiple Alignment Format stores multiple alignments for whole-genome to whole-genome comparisons [1]");
        return ext;
    }

    else if (strcmpm(ext, "NCBI"))
    {
        strcpy(ext, "Structured ASN.1 format used at National Center for Biotechnology Information for DNA and protein data");
        return ext;
    }

    else if (strcmpm(ext, "NEXUS"))
    {
        strcpy(ext, "The Nexus file encodes mixed information about genetic sequence data in a block structured format");
        return ext;
    }

    else if (strcmpm(ext, "NeXML"))
    {
        strcpy(ext, "XML format for phylogenetic trees");
        return ext;
    }

    else if (strcmpm(ext, "NWK"))
    {
        strcpy(ext, "The Newick tree format is a way of representing graph-theoretical trees with edge lengths using parentheses and commas and useful to hold phylogenetic trees.");
        return ext;
    }

    else if (strcmpm(ext, "PDB"))
    {
        strcpy(ext, "structures of biomolecules deposited in Protein Data Bank, also used to exchange protein and nucleic acid structures");
        return ext;
    }

    else if (strcmpm(ext, "PHD"))
    {
        strcpy(ext, "Phred output, from the base-calling software Phred");
        return ext;
    }

    else if (strcmpm(ext, "PLN"))
    {
        strcpy(ext, "Protein Line Notation used in proteax software specification");
        return ext;
    }

    else if (strcmpm(ext, "SAM"))
    {
        strcpy(ext, "SAM, Sequence Alignment Map format, in which the results of the 1000 Genomes Project will be released");
        return ext;
    }

    else if (strcmpm(ext, "SBML"))
    {
        strcpy(ext, "The Systems Biology Markup Language is used to store biochemical network computational models");
        return ext;
    }

    else if (strcmpm(ext, "SCF"))
    {
        strcpy(ext, "Staden chromatogram files used to store data from DNA sequencing");
        return ext;
    }

    else if (strcmpm(ext, "SFF"))
    {
        strcpy(ext, "Standard Flowgram Format");
        return ext;
    }

    else if (strcmpm(ext, "SRA"))
    {
        strcpy(ext, "format used by the National Center for Biotechnology Information Short Read Archive to store high-throughput DNA sequence data");
        return ext;
    }

    else if (strcmpm(ext, "Stockholm"))
    {
        strcpy(ext, "The Stockholm format for representing multiple sequence alignments");
        return ext;
    }

    else if (strcmpm(ext, "Swiss-Prot"))
    {
        strcpy(ext, "The flatfile format used to represent database records for protein sequences from the Swiss-Prot database");
        return ext;
    }

    else if (strcmpm(ext, "VCF"))
    {
        strcpy(ext, "Variant Call Format, a standard created by the 1000 Genomes Project that lists and annotates the entire collection of human variants (with the exception of approximately 1.6 million variants).");
        return ext;
    }

    else if (strcmpm(ext, ".dcm"))
    {
        strcpy(ext, "Digital Imaging and Communications in Medicine (DICOM)");
        return ext;
    }

    else if (strcmpm(ext, "NIfTI"))
    {
        strcpy(ext, "Neuroimaging Informatics Technology Initiative");
        return ext;
    }

    else if (strcmpm(ext, ".nii"))
    {
        strcpy(ext, "single-file (combined data and meta-data) style");
        return ext;
    }

    else if (strcmpm(ext, ".nii.gz"))
    {
        strcpy(ext, "gzip-compressed, used transparently by some software, notably the FMRIB Software Library (FSL)");
        return ext;
    }

    else if (strcmpm(ext, ".gii"))
    {
        strcpy(ext, "single-file (combined data and meta-data) style; NIfTI offspring for brain surface data");
        return ext;
    }

    else if (strcmpm(ext, ".img, .hdr"))
    {
        strcpy(ext, "dual-file (separate data and meta-data, respectively) style");
        return ext;
    }

    else if (strcmpm(ext, ".BRIK, .HEAD"))
    {
        strcpy(ext, "AFNI data, meta-data");
        return ext;
    }

    else if (strcmpm(ext, ".MGH"))
    {
        strcpy(ext, "uncompressed, Massachusetts General Hospital imaging format, used by the FreeSurfer brain analysis package");
        return ext;
    }

    else if (strcmpm(ext, ".MGZ"))
    {
        strcpy(ext, "zip-compressed, Massachusetts General Hospital imaging format, used by the FreeSurfer brain analysis package");
        return ext;
    }

    else if (strcmpm(ext, ".img, .hdr"))
    {
        strcpy(ext, "Analyze data, meta-data");
        return ext;
    }

    else if (strcmpm(ext, "MINC"))
    {
        strcpy(ext, "Medical Imaging NetCDF format");
        return ext;
    }

    else if (strcmpm(ext, ".mnc"))
    {
        strcpy(ext, "previously based on NetCDF; since version 2.0, based on HDF5");
        return ext;
    }

    else if (strcmpm(ext, "ACQ"))
    {
        strcpy(ext, "AcqKnowledge format for Windows/PC from Biopac Systems Inc., Goleta, CA, USA");
        return ext;
    }

    else if (strcmpm(ext, "ADICHT"))
    {
        strcpy(ext, "LabChart format from ADInstruments Pty Ltd, Bella Vista NSW, Australia");
        return ext;
    }

    else if (strcmpm(ext, "BCI2000"))
    {
        strcpy(ext, "The BCI2000 project, Albany, NY, USA");
        return ext;
    }

    else if (strcmpm(ext, "BDF"))
    {
        strcpy(ext, "BioSemi data format from BioSemi B.V. Amsterdam, Netherlands");
        return ext;
    }

    else if (strcmpm(ext, "BKR"))
    {
        strcpy(ext, "The EEG data format developed at the University of Technology Graz, Austria");
        return ext;
    }

    else if (strcmpm(ext, "CFWB"))
    {
        strcpy(ext, "Chart Data Format from ADInstruments Pty Ltd, Bella Vista NSW, Australia");
        return ext;
    }

    else if (strcmpm(ext, "DICOM"))
    {
        strcpy(ext, "Waveform An extension of Dicom for storing waveform data");
        return ext;
    }

    else if (strcmpm(ext, "ecgML"))
    {
        strcpy(ext, "A markup language for electrocardiogram data acquisition and analysis");
        return ext;
    }

    else if (strcmpm(ext, "EDF, EDF+"))
    {
        strcpy(ext, "European Data Format");
        return ext;
    }

    else if (strcmpm(ext, "FEF"))
    {
        strcpy(ext, "File Exchange Format for Vital signs, CEN TS 14271");
        return ext;
    }

    else if (strcmpm(ext, "GDF"))
    {
        strcpy(ext, "The General Data Format for biomedical signals");
        return ext;
    }

    else if (strcmpm(ext, "HL7aECG"))
    {
        strcpy(ext, "Health Level 7 v3 annotated ECG");
        return ext;
    }

    else if (strcmpm(ext, "MFER"))
    {
        strcpy(ext, "Medical waveform Format Encoding Rules");
        return ext;
    }

    else if (strcmpm(ext, "OpenXDF"))
    {
        strcpy(ext, "Open Exchange Data Format from Neurotronics, Inc., Gainesville, FL, USA");
        return ext;
    }

    else if (strcmpm(ext, "SCP-ECG"))
    {
        strcpy(ext, "Standard Communication Protocol for Computer assisted electrocardiography EN1064:2007");
        return ext;
    }

    else if (strcmpm(ext, "SIGIF"))
    {
        strcpy(ext, "A digital SIGnal Interchange Format with application in neurophysiology");
        return ext;
    }

    else if (strcmpm(ext, "WFDB"))
    {
        strcpy(ext, "Format of Physiobank");
        return ext;
    }

    else if (strcmpm(ext, "XDF"))
    {
        strcpy(ext, "eXtensible Data Format");
        return ext;
    }

    else if (strcmpm(ext, "HL7"))
    {
        strcpy(ext, "Health Level 7, a framework for exchange, integration, sharing, and retrieval of health information electronically");
        return ext;
    }

    else if (strcmpm(ext, "xDT"))
    {
        strcpy(ext, "a family of data exchange formats for medical records");
        return ext;
    }

    else if (strcmpm(ext, "CBF"))
    {
        strcpy(ext, "Common Biometric Format, based on CBEFF 2.0 (Common Biometric ExFramework).");
        return ext;
    }

    else if (strcmpm(ext, "EBF"))
    {
        strcpy(ext, "Extended Biometric Format, based on CBF but with S/MIME encryption support and semantic extensions");
        return ext;
    }

    else if (strcmpm(ext, "CBFX"))
    {
        strcpy(ext, "XML Common Biometric Format, based upon XCBF 1.1 (OASIS XML Common Biometric Format)");
        return ext;
    }

    else if (strcmpm(ext, "EBFX"))
    {
        strcpy(ext, "XML Extended Biometric Format, based on CBFX but with W3C XML Encryption support and semantic extensions");
        return ext;
    }

    else if (strcmpm(ext, "ADB"))
    {
        strcpy(ext, "Ada body");
        return ext;
    }

    else if (strcmpm(ext, "ADS"))
    {
        strcpy(ext, "Ada specification");
        return ext;
    }

    else if (strcmpm(ext, "AHK"))
    {
        strcpy(ext, "AutoHotkey script file");
        return ext;
    }

    else if (strcmpm(ext, "APPLESCRIPT"))
    {
        strcpy(ext, "applescript: see SCPT");
        return ext;
    }

    else if (strcmpm(ext, "AS"))
    {
        strcpy(ext, "Adobe Flash ActionScript File");
        return ext;
    }

    else if (strcmpm(ext, "AU3"))
    {
        strcpy(ext, "AutoIt version 3");
        return ext;
    }

    else if (strcmpm(ext, "AWK"))
    {
        strcpy(ext, "AWK");
        return ext;
    }

    else if (strcmpm(ext, "BAT"))
    {
        strcpy(ext, "Batch file");
        return ext;
    }

    else if (strcmpm(ext, "BAS"))
    {
        strcpy(ext, "QBasic & QuickBASIC");
        return ext;
    }

    else if (strcmpm(ext, "BTM"))
    {
        strcpy(ext, "Batch file");
        return ext;
    }

    else if (strcmpm(ext, "CLASS"))
    {
        strcpy(ext, "Compiled Java binary");
        return ext;
    }

    else if (strcmpm(ext, "CLJS"))
    {
        strcpy(ext, "ClojureScript");
        return ext;
    }

    else if (strcmpm(ext, "CMD"))
    {
        strcpy(ext, "Batch file");
        return ext;
    }

    else if (strcmpm(ext, "Coffee"))
    {
        strcpy(ext, "CoffeeScript");
        return ext;
    }

    else if (strcmpm(ext, "C"))
    {
        strcpy(ext, "C");
        return ext;
    }

    else if (strcmpm(ext, "CIA"))
    {
        strcpy(ext, "Nintendo 3DS Software Installation File, short for 'CTR Importable Archive'");
        return ext;
    }

    else if (strcmpm(ext, "CPP"))
    {
        strcpy(ext, "C++");
        return ext;
    }

    else if (strcmpm(ext, "CS"))
    {
        strcpy(ext, "C#");
        return ext;
    }

    else if (strcmpm(ext, "INO"))
    {
        strcpy(ext, "Arduino sketch (program)");
        return ext;
    }

    else if (strcmpm(ext, "EGG"))
    {
        strcpy(ext, "Chicken");
        return ext;
    }

    else if (strcmpm(ext, "EGT"))
    {
        strcpy(ext, "EGT Asterisk Application Source File, EGT Universal Document");
        return ext;
    }

    else if (strcmpm(ext, "ERB"))
    {
        strcpy(ext, "Embedded Ruby, Ruby on Rails Script File");
        return ext;
    }

    else if (strcmpm(ext, "GO"))
    {
        strcpy(ext, "Go");
        return ext;
    }

    else if (strcmpm(ext, "HTA"))
    {
        strcpy(ext, "HTML Application");
        return ext;
    }

    else if (strcmpm(ext, "IBI"))
    {
        strcpy(ext, "Icarus script");
        return ext;
    }

    else if (strcmpm(ext, "ICI"))
    {
        strcpy(ext, "ICI");
        return ext;
    }

    else if (strcmpm(ext, "IJS"))
    {
        strcpy(ext, "J script");
        return ext;
    }

    else if (strcmpm(ext, ".ipynb"))
    {
        strcpy(ext, "IPython Notebook");
        return ext;
    }

    else if (strcmpm(ext, "ITCL"))
    {
        strcpy(ext, "Itcl");
        return ext;
    }

    else if (strcmpm(ext, "JS"))
    {
        strcpy(ext, "JavaScript and JScript");
        return ext;
    }

    else if (strcmpm(ext, "JSFL"))
    {
        strcpy(ext, "Adobe JavaScript language");
        return ext;
    }

    else if (strcmpm(ext, ".kt"))
    {
        strcpy(ext, "Kotlin");
        return ext;
    }

    else if (strcmpm(ext, "LUA"))
    {
        strcpy(ext, "Lua");
        return ext;
    }

    else if (strcmpm(ext, "M"))
    {
        strcpy(ext, "Mathematica package file");
        return ext;
    }

    else if (strcmpm(ext, "MRC"))
    {
        strcpy(ext, "mIRC Script");
        return ext;
    }

    else if (strcmpm(ext, "NCF"))
    {
        strcpy(ext, "NetWare Command File[18][19] (scripting for Novell's NetWare OS)");
        return ext;
    }

    else if (strcmpm(ext, "NUC"))
    {
        strcpy(ext, "compiled script");
        return ext;
    }

    else if (strcmpm(ext, "NUD"))
    {
        strcpy(ext, "C++ External module written in C++");
        return ext;
    }

    else if (strcmpm(ext, "NUT"))
    {
        strcpy(ext, "Squirrel");
        return ext;
    }

    else if (strcmpm(ext, "nqp"))
    {
        strcpy(ext, "Raku language Not Quite Perl, or Raku bootstrapping language[20]");
        return ext;
    }

    else if (strcmpm(ext, "O"))
    {
        strcpy(ext, "Compiled and optimized C/C++ binary");
        return ext;
    }

    else if (strcmpm(ext, "pde"))
    {
        strcpy(ext, "Processing (programming language), Processing script");
        return ext;
    }

    else if (strcmpm(ext, "PHP"))
    {
        strcpy(ext, "PHP");
        return ext;
    }

    else if (strcmpm(ext, "PHP?"))
    {
        strcpy(ext, "PHP (? = version number)");
        return ext;
    }

    else if (strcmpm(ext, "PL"))
    {
        strcpy(ext, "Perl");
        return ext;
    }

    else if (strcmpm(ext, "PM"))
    {
        strcpy(ext, "Perl module");
        return ext;
    }

    else if (strcmpm(ext, "PS1"))
    {
        strcpy(ext, "Windows PowerShell shell script");
        return ext;
    }

    else if (strcmpm(ext, "PS1XML"))
    {
        strcpy(ext, "Windows PowerShell format and type definitions");
        return ext;
    }

    else if (strcmpm(ext, "PSC1"))
    {
        strcpy(ext, "Windows PowerShell console file");
        return ext;
    }

    else if (strcmpm(ext, "PSD1"))
    {
        strcpy(ext, "Windows PowerShell data file");
        return ext;
    }

    else if (strcmpm(ext, "PSM1"))
    {
        strcpy(ext, "Windows PowerShell module file");
        return ext;
    }

    else if (strcmpm(ext, "PY"))
    {
        strcpy(ext, "Python");
        return ext;
    }

    else if (strcmpm(ext, "PYC"))
    {
        strcpy(ext, "Python byte code files");
        return ext;
    }

    else if (strcmpm(ext, "PYO"))
    {
        strcpy(ext, "Python");
        return ext;
    }

    else if (strcmpm(ext, "R"))
    {
        strcpy(ext, "R scripts");
        return ext;
    }

    else if (strcmpm(ext, "r"))
    {
        strcpy(ext, "REBOL scripts");
        return ext;
    }

    else if (strcmpm(ext, "raku"))
    {
        strcpy(ext, "Raku language Raku script (compiled into memory)[20]");
        return ext;
    }

    else if (strcmpm(ext, "rakumod"))
    {
        strcpy(ext, "Raku language Raku module (precompiled)");
        return ext;
    }

    else if (strcmpm(ext, "rakudoc"))
    {
        strcpy(ext, "Raku language Raku documentation file (a slang or sublanguage of Raku)");
        return ext;
    }

    else if (strcmpm(ext, "rakutest"))
    {
        strcpy(ext, "Raku language Unit test files in Raku");
        return ext;
    }

    else if (strcmpm(ext, "RB"))
    {
        strcpy(ext, "Ruby");
        return ext;
    }

    else if (strcmpm(ext, "RDP"))
    {
        strcpy(ext, "RDP connection");
        return ext;
    }

    else if (strcmpm(ext, "red"))
    {
        strcpy(ext, "Red scripts");
        return ext;
    }

    else if (strcmpm(ext, "RS"))
    {
        strcpy(ext, "Rust (programming language)");
        return ext;
    }

    else if (strcmpm(ext, "SB2, SB3"))
    {
        strcpy(ext, "Scratch");
        return ext;
    }

    else if (strcmpm(ext, "SCPT"))
    {
        strcpy(ext, "Applescript");
        return ext;
    }

    else if (strcmpm(ext, "SCPTD"))
    {
        strcpy(ext, "See SCPT.");
        return ext;
    }

    else if (strcmpm(ext, "SDL"))
    {
        strcpy(ext, "State Description Language");
        return ext;
    }

    else if (strcmpm(ext, "SH"))
    {
        strcpy(ext, "Shell script");
        return ext;
    }

    else if (strcmpm(ext, "SPRITE3"))
    {
        strcpy(ext, "Scratch 3.0 exported sprite file");
        return ext;
    }

    else if (strcmpm(ext, "SPWN"))
    {
        strcpy(ext, "SPWN source file");
        return ext;
    }

    else if (strcmpm(ext, "SYJS"))
    {
        strcpy(ext, "SyMAT JavaScript");
        return ext;
    }

    else if (strcmpm(ext, "SYPY"))
    {
        strcpy(ext, "SyMAT Python");
        return ext;
    }

    else if (strcmpm(ext, "TCL"))
    {
        strcpy(ext, "Tcl");
        return ext;
    }

    else if (strcmpm(ext, "TNS"))
    {
        strcpy(ext, "Ti-Nspire Code/File");
        return ext;
    }

    else if (strcmpm(ext, "TS"))
    {
        strcpy(ext, "TypeScript");
        return ext;
    }

    else if (strcmpm(ext, "VBS"))
    {
        strcpy(ext, "Visual Basic Script");
        return ext;
    }

    else if (strcmpm(ext, "XPL"))
    {
        strcpy(ext, "XProc script/pipeline");
        return ext;
    }

    else if (strcmpm(ext, "ebuild"))
    {
        strcpy(ext, "Gentoo Linux's portage package.");
        return ext;
    }

    else if (strcmpm(ext, "OMF"))
    {
        strcpy(ext, "OpenPGP Message Format used by Pretty Good Privacy, GNU Privacy Guard, and other OpenPGP software; can contain keys, signed data, or encrypted data; can be binary or text ('ASCII armored')");
        return ext;
    }

    else if (strcmpm(ext, "GXK"))
    {
        strcpy(ext, "Galaxkey, an encryption platform for authorized, private and confidential email communication[citation needed]");
        return ext;
    }

    else if (strcmpm(ext, ".ssh"))
    {
        strcpy(ext, "OpenSSH private key, Secure Shell private key; format generated by ssh-keygen or converted from PPK with PuTTYgen[21][22][23]");
        return ext;
    }

    else if (strcmpm(ext, ".pub"))
    {
        strcpy(ext, "OpenSSH public key, Secure Shell public key; format generated by ssh-keygen or PuTTYgen[21][22][23]");
        return ext;
    }

    else if (strcmpm(ext, ".ppk"))
    {
        strcpy(ext, "PuTTY private key, Secure Shell private key, in the format generated by PuTTYgen instead of the format used by OpenSSH[21][22][23]");
        return ext;
    }

    else if (strcmpm(ext, ".nSign"))
    {
        strcpy(ext, "nSign public key nSign public key in a custom format[24]");
        return ext;
    }

    else if (strcmpm(ext, ".cer, .crt, .der"))
    {
        strcpy(ext, "Distinguished Encoding Rules stores certificates");
        return ext;
    }

    else if (strcmpm(ext, ".p7b, .p7c"))
    {
        strcpy(ext, "PKCS#7 SignedData commonly appears without main data, just certificates or certificate revocation lists (CRLs)");
        return ext;
    }

    else if (strcmpm(ext, ".p12, .pfx"))
    {
        strcpy(ext, "PKCS#12 can store public certificates and private keys");
        return ext;
    }

    else if (strcmpm(ext, "PEM"))
    {
        strcpy(ext, "Privacy-enhanced Electronic Mail: full format not widely used, but often used to store Distinguished Encoding Rules in Base64 format");
        return ext;
    }

    else if (strcmpm(ext, "PFX"))
    {
        strcpy(ext, "Microsoft predecessor of PKCS#12");
        return ext;
    }

    else if (strcmpm(ext, "AXX"))
    {
        strcpy(ext, "Encrypted file, created with AxCrypt");
        return ext;
    }

    else if (strcmpm(ext, "EEA"))
    {
        strcpy(ext, "An encrypted CAB, ostensibly for protecting email attachments");
        return ext;
    }

    else if (strcmpm(ext, "TC"))
    {
        strcpy(ext, "Virtual encrypted disk container, created by TrueCrypt");
        return ext;
    }

    else if (strcmpm(ext, "KODE"))
    {
        strcpy(ext, "Encrypted file, created with KodeFile");
        return ext;
    }

    else if (strcmpm(ext, "nSignE"))
    {
        strcpy(ext, "An encrypted private key, created by nSign[24]");
        return ext;
    }

    else if (strcmpm(ext, "BPW"))
    {
        strcpy(ext, "Encrypted password file created by Bitser password manager");
        return ext;
    }

    else if (strcmpm(ext, "KDB"))
    {
        strcpy(ext, "KeePass 1 database");
        return ext;
    }

    else if (strcmpm(ext, "KDBX"))
    {
        strcpy(ext, "KeePass 2 database");
        return ext;
    }

    else if (strcmpm(ext, "ACQ"))
    {
        strcpy(ext, "AcqKnowledge format for Windows/PC from Biopac");
        return ext;
    }

    else if (strcmpm(ext, "ADICHT"))
    {
        strcpy(ext, "LabChart format from ADInstruments");
        return ext;
    }

    else if (strcmpm(ext, "BKR"))
    {
        strcpy(ext, "The EEG data format developed at the University of Technology Graz");
        return ext;
    }

    else if (strcmpm(ext, "BDF, CFG"))
    {
        strcpy(ext, "Configuration file for Comtrade data");
        return ext;
    }

    else if (strcmpm(ext, "CFWB"))
    {
        strcpy(ext, "Chart Data format from ADInstruments");
        return ext;
    }

    else if (strcmpm(ext, "DAT"))
    {
        strcpy(ext, "Raw data file for Comtrade data");
        return ext;
    }

    else if (strcmpm(ext, "EDF"))
    {
        strcpy(ext, "European data format");
        return ext;
    }

    else if (strcmpm(ext, "FEF"))
    {
        strcpy(ext, "File Exchange Format for Vital signs");
        return ext;
    }

    else if (strcmpm(ext, "GDF"))
    {
        strcpy(ext, "General data formats for biomedical signals");
        return ext;
    }

    else if (strcmpm(ext, "GMS"))
    {
        strcpy(ext, "Gesture And Motion Signal format");
        return ext;
    }

    else if (strcmpm(ext, "IROCK"))
    {
        strcpy(ext, "intelliRock Sensor Data File Format");
        return ext;
    }

    else if (strcmpm(ext, "MFER"))
    {
        strcpy(ext, "Medical waveform Format Encoding Rules");
        return ext;
    }

    else if (strcmpm(ext, "SAC"))
    {
        strcpy(ext, "Seismic Analysis Code, earthquake seismology data format[25]");
        return ext;
    }

    else if (strcmpm(ext, "SCP-ECG"))
    {
        strcpy(ext, "Standard Communication Protocol for Computer assisted electrocardiography");
        return ext;
    }

    else if (strcmpm(ext, "SEED, MSEED"))
    {
        strcpy(ext, "Standard for the Exchange of Earthquake Data, seismological data and sensor metadata[26]");
        return ext;
    }

    else if (strcmpm(ext, "SEGY"))
    {
        strcpy(ext, "Reflection seismology data format");
        return ext;
    }

    else if (strcmpm(ext, "SIGIF"))
    {
        strcpy(ext, "SIGnal Interchange Format");
        return ext;
    }

    else if (strcmpm(ext, "WIN, WIN32"))
    {
        strcpy(ext, "NIED/ERI seismic data format (.cnt)[27]");
        return ext;
    }

    else if (strcmpm(ext, "8SVX"))
    {
        strcpy(ext, "Commodore-Amiga 8-bit sound (usually in an IFF container)");
        return ext;
    }

    else if (strcmpm(ext, "16SVX"))
    {
        strcpy(ext, "Commodore-Amiga 16-bit sound (usually in an IFF container)");
        return ext;
    }

    else if (strcmpm(ext, "AIFF, AIF, AIFC"))
    {
        strcpy(ext, "Audio Interchange File Format");
        return ext;
    }

    else if (strcmpm(ext, "AU"))
    {
        strcpy(ext, "Simple audio file format introduced by Sun Microsystems");
        return ext;
    }

    else if (strcmpm(ext, "AUP3"))
    {
        strcpy(ext, "Audacity’s file for when you save a song");
        return ext;
    }

    else if (strcmpm(ext, "BWF"))
    {
        strcpy(ext, "Broadcast Wave Format, an extension of WAVE");
        return ext;
    }

    else if (strcmpm(ext, "CDDA"))
    {
        strcpy(ext, "Compact Disc Digital Audio");
        return ext;
    }

    else if (strcmpm(ext, "DSF, DFF"))
    {
        strcpy(ext, "Direct Stream Digital audio file, also used in Super Audio CD");
        return ext;
    }

    else if (strcmpm(ext, "RAW"))
    {
        strcpy(ext, "Raw samples without any header or sync");
        return ext;
    }

    else if (strcmpm(ext, "WAV"))
    {
        strcpy(ext, "Microsoft Wave");
        return ext;
    }

    else if (strcmpm(ext, "CWAV"))
    {
        strcpy(ext, "file read by the Nintendo 3DS for Home-screen sound effects");
        return ext;
    }

    else if (strcmpm(ext, "RA, RM"))
    {
        strcpy(ext, "RealAudio format");
        return ext;
    }

    else if (strcmpm(ext, "FLAC"))
    {
        strcpy(ext, "Free lossless codec of the Ogg project");
        return ext;
    }

    else if (strcmpm(ext, "LA"))
    {
        strcpy(ext, "Lossless audio");
        return ext;
    }

    else if (strcmpm(ext, "PAC"))
    {
        strcpy(ext, "LPAC");
        return ext;
    }

    else if (strcmpm(ext, "APE"))
    {
        strcpy(ext, "Monkey's Audio");
        return ext;
    }

    else if (strcmpm(ext, "OFR, OFS, OFF"))
    {
        strcpy(ext, "OptimFROG");
        return ext;
    }

    else if (strcmpm(ext, "RKA"))
    {
        strcpy(ext, "RKAU");
        return ext;
    }

    else if (strcmpm(ext, "SHN"))
    {
        strcpy(ext, "Shorten");
        return ext;
    }

    else if (strcmpm(ext, "TAK"))
    {
        strcpy(ext, "Tom's Lossless Audio Kompressor[28]");
        return ext;
    }

    else if (strcmpm(ext, "THD"))
    {
        strcpy(ext, "Dolby TrueHD");
        return ext;
    }

    else if (strcmpm(ext, "TTA"))
    {
        strcpy(ext, "Free lossless audio codec (True Audio)");
        return ext;
    }

    else if (strcmpm(ext, "WV"))
    {
        strcpy(ext, "WavPack");
        return ext;
    }

    else if (strcmpm(ext, "WMA"))
    {
        strcpy(ext, "Windows Media Audio 9 Lossless");
        return ext;
    }

    else if (strcmpm(ext, "BCWAV"))
    {
        strcpy(ext, "Nintendo 3DS Home-screen BGM file");
        return ext;
    }

    else if (strcmpm(ext, "BRSTM"))
    {
        strcpy(ext, "Binary Revolution Stream[29]");
        return ext;
    }

    else if (strcmpm(ext, "DTS, DTSHD, DTSMA"))
    {
        strcpy(ext, "DTS (sound system)");
        return ext;
    }

    else if (strcmpm(ext, "AST"))
    {
        strcpy(ext, "Nintendo Audio Stream");
        return ext;
    }

    else if (strcmpm(ext, "AW"))
    {
        strcpy(ext, "Nintendo Audio Sample used in first-party games");
        return ext;
    }

    else if (strcmpm(ext, "PSF"))
    {
        strcpy(ext, "Portable Sound Format, PlayStation variant (originally PlayStation Sound Format)");
        return ext;
    }

    else if (strcmpm(ext, "AC3"))
    {
        strcpy(ext, "Usually used for Dolby Digital tracks");
        return ext;
    }

    else if (strcmpm(ext, "AMR"))
    {
        strcpy(ext, "For GSM and UMTS based mobile phones");
        return ext;
    }

    else if (strcmpm(ext, "MP1"))
    {
        strcpy(ext, "MPEG Layer 1");
        return ext;
    }

    else if (strcmpm(ext, "MP2"))
    {
        strcpy(ext, "MPEG Layer 2");
        return ext;
    }

    else if (strcmpm(ext, "MP3"))
    {
        strcpy(ext, "MPEG Layer 3");
        return ext;
    }

    else if (strcmpm(ext, "SPX"))
    {
        strcpy(ext, "Speex (Ogg project, specialized for voice, low bitrates)");
        return ext;
    }

    else if (strcmpm(ext, "GSM"))
    {
        strcpy(ext, "GSM Full Rate, originally developed for use in mobile phones");
        return ext;
    }

    else if (strcmpm(ext, "WMA"))
    {
        strcpy(ext, "Windows Media Audio");
        return ext;
    }

    else if (strcmpm(ext, "AAC"))
    {
        strcpy(ext, "Advanced Audio Coding (usually in an MPEG-4 container)");
        return ext;
    }

    else if (strcmpm(ext, "MPC"))
    {
        strcpy(ext, "Musepack");
        return ext;
    }

    else if (strcmpm(ext, "VQF"))
    {
        strcpy(ext, "Yamaha TwinVQ");
        return ext;
    }

    else if (strcmpm(ext, "OTS"))
    {
        strcpy(ext, "Audio File (similar to MP3, with more data stored in the file and slightly better compression; designed for use with OtsLabs' OtsAV)");
        return ext;
    }

    else if (strcmpm(ext, "SWA"))
    {
        strcpy(ext, "Adobe Shockwave Audio (Same compression as MP3 with additional header information specific to Adobe Director)");
        return ext;
    }

    else if (strcmpm(ext, "VOX"))
    {
        strcpy(ext, "Dialogic ADPCM Low Sample Rate Digitized Voice");
        return ext;
    }

    else if (strcmpm(ext, "VOC"))
    {
        strcpy(ext, "Creative Labs Soundblaster Creative Voice 8-bit & 16-bit Also output format of RCA Audio Recorders");
        return ext;
    }

    else if (strcmpm(ext, "DWD"))
    {
        strcpy(ext, "DiamondWare Digitized");
        return ext;
    }

    else if (strcmpm(ext, "SMP"))
    {
        strcpy(ext, "Turtlebeach SampleVision");
        return ext;
    }

    else if (strcmpm(ext, "OGG"))
    {
        strcpy(ext, "Ogg Vorbis");
        return ext;
    }

    else if (strcmpm(ext, "MOD"))
    {
        strcpy(ext, "Soundtracker and Protracker sample and melody modules");
        return ext;
    }

    else if (strcmpm(ext, "MT2"))
    {
        strcpy(ext, "MadTracker 2 module");
        return ext;
    }

    else if (strcmpm(ext, "S3M"))
    {
        strcpy(ext, "Scream Tracker 3 module");
        return ext;
    }

    else if (strcmpm(ext, "XM"))
    {
        strcpy(ext, "Fast Tracker module");
        return ext;
    }

    else if (strcmpm(ext, "IT"))
    {
        strcpy(ext, "Impulse Tracker module");
        return ext;
    }

    else if (strcmpm(ext, "NSF"))
    {
        strcpy(ext, "NES Sound Format");
        return ext;
    }

    else if (strcmpm(ext, "MID, MIDI"))
    {
        strcpy(ext, "Standard MIDI file; most often just notes and controls but occasionally also sample dumps (.mid, .rmi)");
        return ext;
    }

    else if (strcmpm(ext, "FTM"))
    {
        strcpy(ext, "FamiTracker Project file");
        return ext;
    }

    else if (strcmpm(ext, "BTM"))
    {
        strcpy(ext, "BambooTracker Project file");
        return ext;
    }

    else if (strcmpm(ext, "ABC"))
    {
        strcpy(ext, "ABC Notation sheet music file");
        return ext;
    }

    else if (strcmpm(ext, "DARMS"))
    {
        strcpy(ext, "DARMS File Format also known as the Ford-Columbia Format");
        return ext;
    }

    else if (strcmpm(ext, "ETF"))
    {
        strcpy(ext, "Enigma Transportation Format abandoned sheet music exchange format");
        return ext;
    }

    else if (strcmpm(ext, "GP"))
    {
        strcpy(ext, "Guitar Pro sheet music and tablature file");
        return ext;
    }

    else if (strcmpm(ext, "KERN"))
    {
        strcpy(ext, "Kern File Format sheet music file");
        return ext;
    }

    else if (strcmpm(ext, "LY"))
    {
        strcpy(ext, "LilyPond sheet music file");
        return ext;
    }

    else if (strcmpm(ext, "MEI"))
    {
        strcpy(ext, "Music Encoding Initiative file format that attempts to encode all musical notations");
        return ext;
    }

    else if (strcmpm(ext, "MIDI"))
    {
        strcpy(ext, "MIDI file format that is a music sheet for instruments");
        return ext;
    }

    else if (strcmpm(ext, "MUS, MUSX"))
    {
        strcpy(ext, "Finale sheet music file");
        return ext;
    }

    else if (strcmpm(ext, "MXL, XML"))
    {
        strcpy(ext, "MusicXML standard sheet music exchange format");
        return ext;
    }

    else if (strcmpm(ext, "MSCX, MSCZ"))
    {
        strcpy(ext, "MuseScore sheet music file");
        return ext;
    }

    else if (strcmpm(ext, "SMDL"))
    {
        strcpy(ext, "Standard Music Description Language sheet music file");
        return ext;
    }

    else if (strcmpm(ext, "SIB"))
    {
        strcpy(ext, "Sibelius sheet music file");
        return ext;
    }

    else if (strcmpm(ext, "NIFF"))
    {
        strcpy(ext, "Notation Interchange File Format");
        return ext;
    }

    else if (strcmpm(ext, "PTB"))
    {
        strcpy(ext, "Power Tab Editor tab");
        return ext;
    }

    else if (strcmpm(ext, "ASF"))
    {
        strcpy(ext, "Advanced Systems Format");
        return ext;
    }

    else if (strcmpm(ext, "CUST"))
    {
        strcpy(ext, "DeliPlayer custom sound format");
        return ext;
    }

    else if (strcmpm(ext, "GYM"))
    {
        strcpy(ext, "Genesis YM2612 log");
        return ext;
    }

    else if (strcmpm(ext, "JAM"))
    {
        strcpy(ext, "Jam music format");
        return ext;
    }

    else if (strcmpm(ext, "MNG"))
    {
        strcpy(ext, "Background music for the Creatures game series, starting from Creatures 2");
        return ext;
    }

    else if (strcmpm(ext, "RMJ"))
    {
        strcpy(ext, "RealJukebox Media used for RealPlayer");
        return ext;
    }

    else if (strcmpm(ext, "SID"))
    {
        strcpy(ext, "Sound Interface Device - Commodore 64 instructions to play SID music and sound effects");
        return ext;
    }

    else if (strcmpm(ext, "SPC"))
    {
        strcpy(ext, "Super NES sound format");
        return ext;
    }

    else if (strcmpm(ext, "TXM"))
    {
        strcpy(ext, "Track ax media");
        return ext;
    }

    else if (strcmpm(ext, "VGM"))
    {
        strcpy(ext, "Stands for 'Video Game Music', log for several different chips");
        return ext;
    }

    else if (strcmpm(ext, "YM"))
    {
        strcpy(ext, "Atari ST/Amstrad CPC YM2149 sound chip format");
        return ext;
    }

    else if (strcmpm(ext, "PVD"))
    {
        strcpy(ext, "Portable Voice Document used for Oaisys & Mitel call recordings");
        return ext;
    }

    else if (strcmpm(ext, "AIMPPL"))
    {
        strcpy(ext, "AIMP Playlist format");
        return ext;
    }

    else if (strcmpm(ext, "ASX"))
    {
        strcpy(ext, "Advanced Stream Redirector");
        return ext;
    }

    else if (strcmpm(ext, "RAM"))
    {
        strcpy(ext, "Real Audio Metafile For RealAudio files only.");
        return ext;
    }

    else if (strcmpm(ext, "XPL"))
    {
        strcpy(ext, "HDi playlist");
        return ext;
    }

    else if (strcmpm(ext, "XSPF"))
    {
        strcpy(ext, "XML Shareable Playlist Format");
        return ext;
    }

    else if (strcmpm(ext, "ZPL"))
    {
        strcpy(ext, "Xbox Music (Formerly Zune) Playlist format from Microsoft");
        return ext;
    }

    else if (strcmpm(ext, "M3U"))
    {
        strcpy(ext, "Multimedia playlist file");
        return ext;
    }

    else if (strcmpm(ext, "PLS"))
    {
        strcpy(ext, "Multimedia playlist, originally developed for use with the museArc");
        return ext;
    }

    else if (strcmpm(ext, "ALS"))
    {
        strcpy(ext, "Ableton Live set");
        return ext;
    }

    else if (strcmpm(ext, "ALC"))
    {
        strcpy(ext, "Ableton Live clip");
        return ext;
    }

    else if (strcmpm(ext, "ALP"))
    {
        strcpy(ext, "Ableton Live pack");
        return ext;
    }

    else if (strcmpm(ext, "ATMOS, AUDIO, METADATA"))
    {
        strcpy(ext, "Dolby Atmos Rendering and Mastering related file");
        return ext;
    }

    else if (strcmpm(ext, "AUP"))
    {
        strcpy(ext, "Audacity project file");
        return ext;
    }

    else if (strcmpm(ext, "AUP3"))
    {
        strcpy(ext, "Audacity 3.0 project file");
        return ext;
    }

    else if (strcmpm(ext, "BAND"))
    {
        strcpy(ext, "GarageBand project file");
        return ext;
    }

    else if (strcmpm(ext, "CEL"))
    {
        strcpy(ext, "Adobe Audition loop file (Cool Edit Loop)");
        return ext;
    }

    else if (strcmpm(ext, "CAU"))
    {
        strcpy(ext, "Caustic project file");
        return ext;
    }

    else if (strcmpm(ext, "CPR"))
    {
        strcpy(ext, "Steinberg Cubase project file");
        return ext;
    }

    else if (strcmpm(ext, "CWP"))
    {
        strcpy(ext, "Cakewalk Sonar project file");
        return ext;
    }

    else if (strcmpm(ext, "DRM"))
    {
        strcpy(ext, "Steinberg Cubase drum file");
        return ext;
    }

    else if (strcmpm(ext, "DMKIT"))
    {
        strcpy(ext, "Image-Line's Drumaxx drum kit file");
        return ext;
    }

    else if (strcmpm(ext, "ENS"))
    {
        strcpy(ext, "Native Instruments Reaktor Ensemble");
        return ext;
    }

    else if (strcmpm(ext, "FLM"))
    {
        strcpy(ext, "Image Line FL Studio Mobile project file");
        return ext;
    }

    else if (strcmpm(ext, "FLP"))
    {
        strcpy(ext, "Image Line FL Studio project file");
        return ext;
    }

    else if (strcmpm(ext, "GRIR"))
    {
        strcpy(ext, "Native Instruments Komplete Guitar Rig Impulse Response");
        return ext;
    }

    else if (strcmpm(ext, "LOGIC"))
    {
        strcpy(ext, "Logic Pro X project file");
        return ext;
    }

    else if (strcmpm(ext, "MMP"))
    {
        strcpy(ext, "LMMS project file (alternatively MMPZ for compressed formats)");
        return ext;
    }

    else if (strcmpm(ext, "MMR"))
    {
        strcpy(ext, "MAGIX Music Maker project file");
        return ext;
    }

    else if (strcmpm(ext, "MX6HS"))
    {
        strcpy(ext, "Mixcraft 6 Home Studio project file");
        return ext;
    }

    else if (strcmpm(ext, "NPR"))
    {
        strcpy(ext, "Steinberg Nuendo project file");
        return ext;
    }

    else if (strcmpm(ext, "OMF, OMFI"))
    {
        strcpy(ext, "Open Media Framework Interchange OMFI succeeds OMF (Open Media Framework)");
        return ext;
    }

    else if (strcmpm(ext, "PTX"))
    {
        strcpy(ext, "Pro Tools 10 or later project file");
        return ext;
    }

    else if (strcmpm(ext, "PTF"))
    {
        strcpy(ext, "Pro Tools 7 up to Pro Tools 9 project file");
        return ext;
    }

    else if (strcmpm(ext, "PTS"))
    {
        strcpy(ext, "Legacy Pro Tools project file");
        return ext;
    }

    else if (strcmpm(ext, "RIN"))
    {
        strcpy(ext, "Soundways RIN-M file containing sound recording participant credits and song information");
        return ext;
    }

    else if (strcmpm(ext, "RPP, RPP-BAK"))
    {
        strcpy(ext, "REAPER project file");
        return ext;
    }

    else if (strcmpm(ext, "REAPEAKS"))
    {
        strcpy(ext, "REAPER peak (waveform cache) file");
        return ext;
    }

    else if (strcmpm(ext, "SES"))
    {
        strcpy(ext, "Adobe Audition multitrack session file");
        return ext;
    }

    else if (strcmpm(ext, "SFK"))
    {
        strcpy(ext, "Sound Forge waveform cache file");
        return ext;
    }

    else if (strcmpm(ext, "SFL"))
    {
        strcpy(ext, "Sound Forge sound file");
        return ext;
    }

    else if (strcmpm(ext, "SNG"))
    {
        strcpy(ext, "MIDI sequence file (MidiSoft, Korg, etc.) or n-Track Studio project file");
        return ext;
    }

    else if (strcmpm(ext, "STF"))
    {
        strcpy(ext, "StudioFactory project file. It contains all necessary patches, samples, tracks and settings to play the file");
        return ext;
    }

    else if (strcmpm(ext, "SND"))
    {
        strcpy(ext, "Akai MPC sound file");
        return ext;
    }

    else if (strcmpm(ext, "SYN"))
    {
        strcpy(ext, "SynFactory project file. It contains all necessary patches, samples, tracks and settings to play the file");
        return ext;
    }

    else if (strcmpm(ext, "UST"))
    {
        strcpy(ext, "Utau Editor sequence excluding wave-file");
        return ext;
    }

    else if (strcmpm(ext, "VCLS"))
    {
        strcpy(ext, "VocaListener project file");
        return ext;
    }

    else if (strcmpm(ext, "VPR"))
    {
        strcpy(ext, "Vocaloid 5 Editor sequence excluding wave-file");
        return ext;
    }

    else if (strcmpm(ext, "VSQ"))
    {
        strcpy(ext, "Vocaloid 2 Editor sequence excluding wave-file");
        return ext;
    }

    else if (strcmpm(ext, "VSQX"))
    {
        strcpy(ext, "Vocaloid 3 & 4 Editor sequence excluding wave-file");
        return ext;
    }

    else if (strcmpm(ext, "🗿"))
    {
        strcpy(ext, "ThirtyDollar Project file");
        return ext;
    }

    else if (strcmpm(ext, "DVR-MS"))
    {
        strcpy(ext, "Windows XP Media Center Edition's Windows Media Center recorded television format");
        return ext;
    }

    else if (strcmpm(ext, "WTV"))
    {
        strcpy(ext, "Windows Vista's and up Windows Media Center recorded television format");
        return ext;
    }

    else if (strcmpm(ext, "ADA, ADB, 2.ADA"))
    {
        strcpy(ext, "Ada (body) source");
        return ext;
    }

    else if (strcmpm(ext, "ADS, 1.ADA"))
    {
        strcpy(ext, "Ada (specification) source");
        return ext;
    }

    else if (strcmpm(ext, "ASM, S"))
    {
        strcpy(ext, "Assembly language source");
        return ext;
    }

    else if (strcmpm(ext, "BAS"))
    {
        strcpy(ext, "BASIC, FreeBASIC, Visual Basic, BASIC-PLUS source,[15] PICAXE basic");
        return ext;
    }

    else if (strcmpm(ext, "BB"))
    {
        strcpy(ext, "Blitz Basic Blitz3D");
        return ext;
    }

    else if (strcmpm(ext, "BMX"))
    {
        strcpy(ext, "Blitz Basic BlitzMax");
        return ext;
    }

    else if (strcmpm(ext, "C"))
    {
        strcpy(ext, "C source");
        return ext;
    }

    else if (strcmpm(ext, "CLJ"))
    {
        strcpy(ext, "Clojure source code");
        return ext;
    }

    else if (strcmpm(ext, "CLS"))
    {
        strcpy(ext, "Visual Basic class");
        return ext;
    }

    else if (strcmpm(ext, "COB, CBL"))
    {
        strcpy(ext, "COBOL source");
        return ext;
    }

    else if (strcmpm(ext, "CPP, CC, CXX, C, CBP"))
    {
        strcpy(ext, "C++ source");
        return ext;
    }

    else if (strcmpm(ext, "CS"))
    {
        strcpy(ext, "C# source");
        return ext;
    }

    else if (strcmpm(ext, "CSPROJ"))
    {
        strcpy(ext, "C# project (Visual Studio .NET)");
        return ext;
    }

    else if (strcmpm(ext, "D"))
    {
        strcpy(ext, "D source");
        return ext;
    }

    else if (strcmpm(ext, "DBA"))
    {
        strcpy(ext, "DarkBASIC source");
        return ext;
    }

    else if (strcmpm(ext, "DBPro123"))
    {
        strcpy(ext, "DarkBASIC Professional project");
        return ext;
    }

    else if (strcmpm(ext, "E"))
    {
        strcpy(ext, "Eiffel source");
        return ext;
    }

    else if (strcmpm(ext, "EFS"))
    {
        strcpy(ext, "EGT Forever Source File");
        return ext;
    }

    else if (strcmpm(ext, "EGT"))
    {
        strcpy(ext, "EGT Asterisk Source File, could be J, C#, VB.net, EF 2.0 (EGT Forever)");
        return ext;
    }

    else if (strcmpm(ext, "EL"))
    {
        strcpy(ext, "Emacs Lisp source");
        return ext;
    }

    else if (strcmpm(ext, "FOR, FTN, F, F77, F90"))
    {
        strcpy(ext, "Fortran source");
        return ext;
    }

    else if (strcmpm(ext, "FRM"))
    {
        strcpy(ext, "Visual Basic form");
        return ext;
    }

    else if (strcmpm(ext, "FRX"))
    {
        strcpy(ext, "Visual Basic form stash file (binary form file)");
        return ext;
    }

    else if (strcmpm(ext, "FTH"))
    {
        strcpy(ext, "Forth source");
        return ext;
    }

    else if (strcmpm(ext, "GED"))
    {
        strcpy(ext, "Game Maker Extension Editable file as of version 7.0");
        return ext;
    }

    else if (strcmpm(ext, "GM6"))
    {
        strcpy(ext, "Game Maker Editable file as of version 6.x");
        return ext;
    }

    else if (strcmpm(ext, "GMD"))
    {
        strcpy(ext, "Game Maker Editable file up to version 5.x");
        return ext;
    }

    else if (strcmpm(ext, "GMK"))
    {
        strcpy(ext, "Game Maker Editable file as of version 7.0");
        return ext;
    }

    else if (strcmpm(ext, "GML"))
    {
        strcpy(ext, "Game Maker Language script file");
        return ext;
    }

    else if (strcmpm(ext, "GO"))
    {
        strcpy(ext, "Go source");
        return ext;
    }

    else if (strcmpm(ext, "H"))
    {
        strcpy(ext, "C/C++ header file");
        return ext;
    }

    else if (strcmpm(ext, "HPP, HXX"))
    {
        strcpy(ext, "C++ header file");
        return ext;
    }

    else if (strcmpm(ext, "HS"))
    {
        strcpy(ext, "Haskell source");
        return ext;
    }

    else if (strcmpm(ext, "I"))
    {
        strcpy(ext, "SWIG interface file");
        return ext;
    }

    else if (strcmpm(ext, "INC"))
    {
        strcpy(ext, "Turbo Pascal included source");
        return ext;
    }

    else if (strcmpm(ext, "JAVA"))
    {
        strcpy(ext, "Java source");
        return ext;
    }

    else if (strcmpm(ext, "L"))
    {
        strcpy(ext, "lex source");
        return ext;
    }

    else if (strcmpm(ext, "LGT"))
    {
        strcpy(ext, "Logtalk source");
        return ext;
    }

    else if (strcmpm(ext, "LISP"))
    {
        strcpy(ext, "Common Lisp source");
        return ext;
    }

    else if (strcmpm(ext, "M"))
    {
        strcpy(ext, "Objective-C source");
        return ext;
    }

    else if (strcmpm(ext, "M"))
    {
        strcpy(ext, "MATLAB");
        return ext;
    }

    else if (strcmpm(ext, "M"))
    {
        strcpy(ext, "Mathematica");
        return ext;
    }

    else if (strcmpm(ext, "M4"))
    {
        strcpy(ext, "m4 source");
        return ext;
    }

    else if (strcmpm(ext, "ML"))
    {
        strcpy(ext, "Standard ML and OCaml source");
        return ext;
    }

    else if (strcmpm(ext, "MSQR"))
    {
        strcpy(ext, "M² source file, created by Mattia Marziali");
        return ext;
    }

    else if (strcmpm(ext, "N"))
    {
        strcpy(ext, "Nemerle source");
        return ext;
    }

    else if (strcmpm(ext, "NB"))
    {
        strcpy(ext, "Nuclear Basic source");
        return ext;
    }

    else if (strcmpm(ext, "P"))
    {
        strcpy(ext, "Parser source");
        return ext;
    }

    else if (strcmpm(ext, "PAS, PP, P"))
    {
        strcpy(ext, "Pascal source (DPR for projects)");
        return ext;
    }

    else if (strcmpm(ext, "PHP, PHP3, PHP4, PHP5, PHPS, Phtml"))
    {
        strcpy(ext, "PHP source");
        return ext;
    }

    else if (strcmpm(ext, "PIV"))
    {
        strcpy(ext, "Pivot stickfigure animator");
        return ext;
    }

    else if (strcmpm(ext, "PL, PM"))
    {
        strcpy(ext, "Perl");
        return ext;
    }

    else if (strcmpm(ext, "PLI, PL1"))
    {
        strcpy(ext, "PL/I");
        return ext;
    }

    else if (strcmpm(ext, "PRG"))
    {
        strcpy(ext, "Ashton-Tate; dbII, dbIII and dbIV, db, db7, clipper, Microsoft Fox and FoxPro, harbour, xharbour, and Xbase");
        return ext;
    }

    else if (strcmpm(ext, "PRO"))
    {
        strcpy(ext, "IDL");
        return ext;
    }

    else if (strcmpm(ext, "POL"))
    {
        strcpy(ext, "Apcera Policy Language doclet");
        return ext;
    }

    else if (strcmpm(ext, "PY"))
    {
        strcpy(ext, "Python source");
        return ext;
    }

    else if (strcmpm(ext, "R"))
    {
        strcpy(ext, "R source");
        return ext;
    }

    else if (strcmpm(ext, "raku, rakumod, rakudoc, rakutest, nqp"))
    {
        strcpy(ext, "Raku Language");
        return ext;
    }

    else if (strcmpm(ext, "RED"))
    {
        strcpy(ext, "Red source");
        return ext;
    }

    else if (strcmpm(ext, "REDS"))
    {
        strcpy(ext, "Red/System source");
        return ext;
    }

    else if (strcmpm(ext, "RB"))
    {
        strcpy(ext, "Ruby source");
        return ext;
    }

    else if (strcmpm(ext, "RESX"))
    {
        strcpy(ext, "Resource file for .NET applications");
        return ext;
    }

    else if (strcmpm(ext, "RC, RC2"))
    {
        strcpy(ext, "Resource script files to generate resources for .NET applications");
        return ext;
    }

    else if (strcmpm(ext, "RKT, RKTL"))
    {
        strcpy(ext, "Racket source");
        return ext;
    }

    else if (strcmpm(ext, "SCALA"))
    {
        strcpy(ext, "Scala source");
        return ext;
    }

    else if (strcmpm(ext, "SCI, SCE"))
    {
        strcpy(ext, "Scilab");
        return ext;
    }

    else if (strcmpm(ext, "SCM"))
    {
        strcpy(ext, "Scheme source");
        return ext;
    }

    else if (strcmpm(ext, "SD7"))
    {
        strcpy(ext, "Seed7 source");
        return ext;
    }

    else if (strcmpm(ext, "SKB, SKC"))
    {
        strcpy(ext, "Sage Retrieve 4GL Common Area (Main and Amended backup)");
        return ext;
    }

    else if (strcmpm(ext, "SKD"))
    {
        strcpy(ext, "Sage Retrieve 4GL Database");
        return ext;
    }

    else if (strcmpm(ext, "SKF, SKG"))
    {
        strcpy(ext, "Sage Retrieve 4GL File Layouts (Main and Amended backup)");
        return ext;
    }

    else if (strcmpm(ext, "SKI"))
    {
        strcpy(ext, "Sage Retrieve 4GL Instructions");
        return ext;
    }

    else if (strcmpm(ext, "SKK"))
    {
        strcpy(ext, "Sage Retrieve 4GL Report Generator");
        return ext;
    }

    else if (strcmpm(ext, "SKM"))
    {
        strcpy(ext, "Sage Retrieve 4GL Menu");
        return ext;
    }

    else if (strcmpm(ext, "SKO"))
    {
        strcpy(ext, "Sage Retrieve 4GL Program");
        return ext;
    }

    else if (strcmpm(ext, "SKP, SKQ"))
    {
        strcpy(ext, "Sage Retrieve 4GL Print Layouts (Main and Amended backup)");
        return ext;
    }

    else if (strcmpm(ext, "SKS, SKT"))
    {
        strcpy(ext, "Sage Retrieve 4GL Screen Layouts (Main and Amended backup)");
        return ext;
    }

    else if (strcmpm(ext, "SKZ"))
    {
        strcpy(ext, "Sage Retrieve 4GL Security File");
        return ext;
    }

    else if (strcmpm(ext, "SLN"))
    {
        strcpy(ext, "Visual Studio solution");
        return ext;
    }

    else if (strcmpm(ext, "SPIN"))
    {
        strcpy(ext, "Spin source (for Parallax Propeller microcontrollers)");
        return ext;
    }

    else if (strcmpm(ext, "STK"))
    {
        strcpy(ext, "Stickfigure file for Pivot stickfigure animator");
        return ext;
    }

    else if (strcmpm(ext, "SWG"))
    {
        strcpy(ext, "SWIG source code");
        return ext;
    }

    else if (strcmpm(ext, "TCL"))
    {
        strcpy(ext, "Tcl source code");
        return ext;
    }

    else if (strcmpm(ext, "VAP"))
    {
        strcpy(ext, "Visual Studio Analyzer project");
        return ext;
    }

    else if (strcmpm(ext, "VB"))
    {
        strcpy(ext, "Visual Basic.NET source");
        return ext;
    }

    else if (strcmpm(ext, "VBG"))
    {
        strcpy(ext, "Visual Studio compatible project group");
        return ext;
    }

    else if (strcmpm(ext, "VBP, VIP"))
    {
        strcpy(ext, "Visual Basic project");
        return ext;
    }

    else if (strcmpm(ext, "VBPROJ"))
    {
        strcpy(ext, "Visual Basic .NET project");
        return ext;
    }

    else if (strcmpm(ext, "VCPROJ"))
    {
        strcpy(ext, "Visual C++ project");
        return ext;
    }

    else if (strcmpm(ext, "VDPROJ"))
    {
        strcpy(ext, "Visual Studio deployment project");
        return ext;
    }

    else if (strcmpm(ext, "XPL"))
    {
        strcpy(ext, "XProc script/pipeline");
        return ext;
    }

    else if (strcmpm(ext, "XQ"))
    {
        strcpy(ext, "XQuery file");
        return ext;
    }

    else if (strcmpm(ext, "XSL"))
    {
        strcpy(ext, "XSLT stylesheet");
        return ext;
    }

    else if (strcmpm(ext, "Y"))
    {
        strcpy(ext, "yacc source");
        return ext;
    }

    else if (strcmpm(ext, "123"))
    {
        strcpy(ext, "Lotus 1-2-3");
        return ext;
    }

    else if (strcmpm(ext, "AB2"))
    {
        strcpy(ext, "Abykus worksheet");
        return ext;
    }

    else if (strcmpm(ext, "AB3"))
    {
        strcpy(ext, "Abykus workbook");
        return ext;
    }

    else if (strcmpm(ext, "AWS"))
    {
        strcpy(ext, "Ability Spreadsheet");
        return ext;
    }

    else if (strcmpm(ext, "BCSV"))
    {
        strcpy(ext, "Nintendo proprietary table format");
        return ext;
    }

    else if (strcmpm(ext, "CLF"))
    {
        strcpy(ext, "ThinkFree Calc");
        return ext;
    }

    else if (strcmpm(ext, "CELL"))
    {
        strcpy(ext, "Haansoft(Hancom) SpreadSheet software document");
        return ext;
    }

    else if (strcmpm(ext, "CSV"))
    {
        strcpy(ext, "Comma-Separated Values");
        return ext;
    }

    else if (strcmpm(ext, "GSHEET"))
    {
        strcpy(ext, "Google Drive Spreadsheet");
        return ext;
    }

    else if (strcmpm(ext, "numbers"))
    {
        strcpy(ext, "An Apple Numbers Spreadsheet file");
        return ext;
    }

    else if (strcmpm(ext, "gnumeric"))
    {
        strcpy(ext, "Gnumeric spreadsheet, a gziped XML file");
        return ext;
    }

    else if (strcmpm(ext, "LCW"))
    {
        strcpy(ext, "Lucid 3-D");
        return ext;
    }

    else if (strcmpm(ext, "ODS"))
    {
        strcpy(ext, "OpenDocument spreadsheet");
        return ext;
    }

    else if (strcmpm(ext, "OTS"))
    {
        strcpy(ext, "OpenDocument spreadsheet template");
        return ext;
    }

    else if (strcmpm(ext, "QPW"))
    {
        strcpy(ext, "Quattro Pro spreadsheet");
        return ext;
    }

    else if (strcmpm(ext, "SDC"))
    {
        strcpy(ext, "StarOffice StarCalc Spreadsheet");
        return ext;
    }

    else if (strcmpm(ext, "SLK"))
    {
        strcpy(ext, "SYLK (SYmbolic LinK)");
        return ext;
    }

    else if (strcmpm(ext, "STC"))
    {
        strcpy(ext, "OpenOffice.org XML (obsolete) Spreadsheet template");
        return ext;
    }

    else if (strcmpm(ext, "SXC"))
    {
        strcpy(ext, "OpenOffice.org XML (obsolete) Spreadsheet");
        return ext;
    }

    else if (strcmpm(ext, "TAB"))
    {
        strcpy(ext, "tab delimited columns; also TSV (Tab-Separated Values)");
        return ext;
    }

    else if (strcmpm(ext, "TXT"))
    {
        strcpy(ext, "text file");
        return ext;
    }

    else if (strcmpm(ext, "VC"))
    {
        strcpy(ext, "Visicalc");
        return ext;
    }

    else if (strcmpm(ext, "WK1"))
    {
        strcpy(ext, "Lotus 1-2-3 up to version 2.01");
        return ext;
    }

    else if (strcmpm(ext, "WK3"))
    {
        strcpy(ext, "Lotus 1-2-3 version 3.0");
        return ext;
    }

    else if (strcmpm(ext, "WK4"))
    {
        strcpy(ext, "Lotus 1-2-3 version 4.0");
        return ext;
    }

    else if (strcmpm(ext, "WKS"))
    {
        strcpy(ext, "Lotus 1-2-3");
        return ext;
    }

    else if (strcmpm(ext, "WKS"))
    {
        strcpy(ext, "Microsoft Works");
        return ext;
    }

    else if (strcmpm(ext, "WQ1"))
    {
        strcpy(ext, "Quattro Pro DOS version");
        return ext;
    }

    else if (strcmpm(ext, "XLK"))
    {
        strcpy(ext, "Microsoft Excel worksheet backup");
        return ext;
    }

    else if (strcmpm(ext, "XLS"))
    {
        strcpy(ext, "Microsoft Excel worksheet sheet (97-2003)");
        return ext;
    }

    else if (strcmpm(ext, "XLSB"))
    {
        strcpy(ext, "Microsoft Excel binary workbook");
        return ext;
    }

    else if (strcmpm(ext, "XLSM"))
    {
        strcpy(ext, "Microsoft Excel Macro-enabled workbook");
        return ext;
    }

    else if (strcmpm(ext, "XLSX"))
    {
        strcpy(ext, "Office Open XML worksheet sheet");
        return ext;
    }

    else if (strcmpm(ext, "XLR"))
    {
        strcpy(ext, "Microsoft Works version 6.0");
        return ext;
    }

    else if (strcmpm(ext, "XLT"))
    {
        strcpy(ext, "Microsoft Excel worksheet template");
        return ext;
    }

    else if (strcmpm(ext, "XLTM"))
    {
        strcpy(ext, "Microsoft Excel Macro-enabled worksheet template");
        return ext;
    }

    else if (strcmpm(ext, "XLW"))
    {
        strcpy(ext, "Microsoft Excel worksheet workspace (version 4.0)");
        return ext;
    }

    else if (strcmpm(ext, "TSV"))
    {
        strcpy(ext, "Tab-separated values");
        return ext;
    }

    else if (strcmpm(ext, "CSV"))
    {
        strcpy(ext, "Comma-separated values");
        return ext;
    }

    else if (strcmpm(ext, "db"))
    {
        strcpy(ext, "databank format; accessible by many econometric applications");
        return ext;
    }

    else if (strcmpm(ext, "dif"))
    {
        strcpy(ext, "accessible by many spreadsheet applications");
        return ext;
    }

    else if (strcmpm(ext, "AAF"))
    {
        strcpy(ext, "mostly intended to hold edit decisions and rendering information, but can also contain compressed media essence");
        return ext;
    }

    else if (strcmpm(ext, "3GP"))
    {
        strcpy(ext, "the most common video format for cell phones");
        return ext;
    }

    else if (strcmpm(ext, "GIF"))
    {
        strcpy(ext, "Animated GIF (simple animation; until recently often avoided because of patent problems)");
        return ext;
    }

    else if (strcmpm(ext, "ASF"))
    {
        strcpy(ext, "container (enables any form of compression to be used; MPEG-4 is common; video in ASF-containers is also called Windows Media Video (WMV))");
        return ext;
    }

    else if (strcmpm(ext, "AVCHD"))
    {
        strcpy(ext, "Advanced Video Codec High Definition");
        return ext;
    }

    else if (strcmpm(ext, "AVI"))
    {
        strcpy(ext, "container (a shell, which enables any form of compression to be used)");
        return ext;
    }

    else if (strcmpm(ext, ".bik"))
    {
        strcpy(ext, "BIK Bink Video file. A video compression system developed by RAD Game Tools");
        return ext;
    }

    else if (strcmpm(ext, "BRAW"))
    {
        strcpy(ext, "a video format used by Blackmagic's Ursa Mini Pro 12K cameras.");
        return ext;
    }

    else if (strcmpm(ext, "CAM"))
    {
        strcpy(ext, "aMSN webcam log file");
        return ext;
    }

    else if (strcmpm(ext, "COLLAB"))
    {
        strcpy(ext, "Blackboard Collaborate session recording");
        return ext;
    }

    else if (strcmpm(ext, "DAT"))
    {
        strcpy(ext, "video standard data file (automatically created when we attempted to burn as video file on the CD)");
        return ext;
    }

    else if (strcmpm(ext, "DVR-MS"))
    {
        strcpy(ext, "Windows XP Media Center Edition's Windows Media Center recorded television format");
        return ext;
    }

    else if (strcmpm(ext, "FLV"))
    {
        strcpy(ext, "Flash video (encoded to run in a flash animation)");
        return ext;
    }

    else if (strcmpm(ext, "MPEG-1"))
    {
        strcpy(ext, "M1V Video");
        return ext;
    }

    else if (strcmpm(ext, "MPEG-2"))
    {
        strcpy(ext, "M2V Video");
        return ext;
    }

    else if (strcmpm(ext, "NOA"))
    {
        strcpy(ext, "rare movie format use in some Japanese eroges around 2002");
        return ext;
    }

    else if (strcmpm(ext, "FLA"))
    {
        strcpy(ext, "Adobe Flash (for producing)");
        return ext;
    }

    else if (strcmpm(ext, "FLR"))
    {
        strcpy(ext, "(text file which contains scripts extracted from SWF by a free ActionScript decompiler named FLARE)");
        return ext;
    }

    else if (strcmpm(ext, "SOL"))
    {
        strcpy(ext, "Adobe Flash shared object ('Flash cookie')");
        return ext;
    }

    else if (strcmpm(ext, "STR"))
    {
        strcpy(ext, "Sony PlayStation video stream");
        return ext;
    }

    else if (strcmpm(ext, "M4V"))
    {
        strcpy(ext, "video container file format developed by Apple");
        return ext;
    }

    else if (strcmpm(ext, ".mkv"))
    {
        strcpy(ext, "Matroska Matroska is a container format, which enables any video format such as MPEG-4 ASP or AVC to be used along with other content such as subtitles and detailed meta information");
        return ext;
    }

    else if (strcmpm(ext, "WRAP"))
    {
        strcpy(ext, "MediaForge (*.wrap)");
        return ext;
    }

    else if (strcmpm(ext, "MNG"))
    {
        strcpy(ext, "mainly simple animation containing PNG and JPEG objects, often somewhat more complex than animated GIF");
        return ext;
    }

    else if (strcmpm(ext, ".mov"))
    {
        strcpy(ext, "QuickTime container which enables any form of compression to be used; Sorenson codec is the most common; QTCH is the filetype for cached video and audio streams");
        return ext;
    }

    else if (strcmpm(ext, "mpeg, mpg, mpe"))
    {
        strcpy(ext, ".mpeg, .mpg, .mpe - MPEG");
        return ext;
    }

    else if (strcmpm(ext, "THP"))
    {
        strcpy(ext, "Nintendo proprietary movie/video format");
        return ext;
    }

    else if (strcmpm(ext, "MPEG-4, mp4"))
    {
        strcpy(ext, "MPEG-4 Part 14, shortened 'MP4' multimedia container (most often used for Sony's PlayStation Portable and Apple's iPod)");
        return ext;
    }

    else if (strcmpm(ext, "MXF"))
    {
        strcpy(ext, "Material Exchange Format (standardized wrapper format for audio/visual material developed by SMPTE)");
        return ext;
    }

    else if (strcmpm(ext, "ROQ"))
    {
        strcpy(ext, "used by Quake III Arena");
        return ext;
    }

    else if (strcmpm(ext, "NSV"))
    {
        strcpy(ext, "NSV Nullsoft Streaming Video (media container designed for streaming video content over the Internet)");
        return ext;
    }

    else if (strcmpm(ext, "Ogg"))
    {
        strcpy(ext, "container, multimedia");
        return ext;
    }

    else if (strcmpm(ext, "RM"))
    {
        strcpy(ext, "RealMedia");
        return ext;
    }

    else if (strcmpm(ext, "SVI"))
    {
        strcpy(ext, "SVI Samsung video format for portable players");
        return ext;
    }

    else if (strcmpm(ext, "SMI"))
    {
        strcpy(ext, "SMI SAMI Caption file (HTML like subtitle for movie files)");
        return ext;
    }

    else if (strcmpm(ext, ".smk"))
    {
        strcpy(ext, "SMK Smacker video file. A video compression system developed by RAD Game Tools");
        return ext;
    }

    else if (strcmpm(ext, "SWF"))
    {
        strcpy(ext, "Adobe Flash (for viewing)");
        return ext;
    }

    else if (strcmpm(ext, "WMV"))
    {
        strcpy(ext, "Windows Media Video (See ASF)");
        return ext;
    }

    else if (strcmpm(ext, "WTV"))
    {
        strcpy(ext, "Windows Vista's and up Windows Media Center recorded television format");
        return ext;
    }

    else if (strcmpm(ext, "YUV"))
    {
        strcpy(ext, "raw video format; resolution (horizontal x vertical) and sample structure 4:2:2 or 4:2:0 must be known explicitly");
        return ext;
    }

    else if (strcmpm(ext, "WebM"))
    {
        strcpy(ext, "video file format for web video using HTML5");
        return ext;
    }

    else if (strcmpm(ext, "BRAW"))
    {
        strcpy(ext, "Blackmagic Design RAW video file name");
        return ext;
    }

    else if (strcmpm(ext, "DRP"))
    {
        strcpy(ext, "Davinci Resolve 17 project file");
        return ext;
    }

    else if (strcmpm(ext, "FCP"))
    {
        strcpy(ext, "Final Cut Pro project file");
        return ext;
    }

    else if (strcmpm(ext, "MSWMM"))
    {
        strcpy(ext, "Windows Movie Maker project file");
        return ext;
    }

    else if (strcmpm(ext, "PPJ, PRPROJ"))
    {
        strcpy(ext, "Adobe Premiere Pro video editing file");
        return ext;
    }

    else if (strcmpm(ext, "IMOVIEPROJ"))
    {
        strcpy(ext, "iMovie project file");
        return ext;
    }

    else if (strcmpm(ext, "VEG, VEG-BAK"))
    {
        strcpy(ext, "Sony Vegas project file");
        return ext;
    }

    else if (strcmpm(ext, "SUF"))
    {
        strcpy(ext, "Sony camera configuration file (setup.suf) produced by XDCAM-EX camcorders");
        return ext;
    }

    else if (strcmpm(ext, "WLMP"))
    {
        strcpy(ext, "Windows Live Movie Maker project file");
        return ext;
    }

    else if (strcmpm(ext, "KDENLIVE"))
    {
        strcpy(ext, "Kdenlive project file");
        return ext;
    }

    else if (strcmpm(ext, "VPJ"))
    {
        strcpy(ext, "VideoPad project file");
        return ext;
    }

    else if (strcmpm(ext, "MOTN"))
    {
        strcpy(ext, "Apple Motion project file");
        return ext;
    }

    else if (strcmpm(ext, "IMOVIEMOBILE"))
    {
        strcpy(ext, "iMovie project file for iOS users");
        return ext;
    }

    else if (strcmpm(ext, "WFP, WVE"))
    {
        strcpy(ext, "Wondershare Filmora Project");
        return ext;
    }

    else if (strcmpm(ext, "PDS"))
    {
        strcpy(ext, "Cyberlink PowerDirector project");
        return ext;
    }

    else if (strcmpm(ext, "VPROJ"))
    {
        strcpy(ext, "VSDC Free Video Editor project file");
        return ext;
    }

    else if (strcmpm(ext, "MCADDON"))
    {
        strcpy(ext, "format used by the Bedrock Edition of Minecraft for add-ons; Resource packs for the game");
        return ext;
    }

    else if (strcmpm(ext, "MCFUNCTION"))
    {
        strcpy(ext, "format used by Minecraft for storing functions/scripts");
        return ext;
    }

    else if (strcmpm(ext, "MCMETA"))
    {
        strcpy(ext, "format used by Minecraft for storing data for customizable texture packs for the game");
        return ext;
    }

    else if (strcmpm(ext, "MCPACK"))
    {
        strcpy(ext, "format used by the Bedrock Edition of Minecraft for in-game texture packs; full addons for the game");
        return ext;
    }

    else if (strcmpm(ext, "MCR"))
    {
        strcpy(ext, "format used by Minecraft for storing data for in-game worlds before version 1.2");
        return ext;
    }

    else if (strcmpm(ext, "MCTEMPLATE"))
    {
        strcpy(ext, "format used by the Bedrock Edition of Minecraft for world templates");
        return ext;
    }

    else if (strcmpm(ext, "MCWORLD"))
    {
        strcpy(ext, "format used by the Bedrock Edition of Minecraft for in-game worlds");
        return ext;
    }

    else if (strcmpm(ext, "NBS"))
    {
        strcpy(ext, "format used by Note Block Studio, a tool that can be used to make note block songs for Minecraft.");
        return ext;
    }

    else if (strcmpm(ext, "GBX"))
    {
        strcpy(ext, "All user-created content is stored in this file type.");
        return ext;
    }

    else if (strcmpm(ext, "REPLAY.GBX"))
    {
        strcpy(ext, "Stores the replay of a race.");
        return ext;
    }

    else if (strcmpm(ext, "CHALLENGE.GBX, MAP.GBX"))
    {
        strcpy(ext, "Stores tracks/maps.");
        return ext;
    }

    else if (strcmpm(ext, "SYSTEMCONFIG.GBX"))
    {
        strcpy(ext, "Launcher info.");
        return ext;
    }

    else if (strcmpm(ext, "TRACKMANIAVEHICLE.GBX"))
    {
        strcpy(ext, "Info about a certain car type.");
        return ext;
    }

    else if (strcmpm(ext, "VEHICLETUNINGS.GBX"))
    {
        strcpy(ext, "Vehicle physics.");
        return ext;
    }

    else if (strcmpm(ext, "SOLID.GBX"))
    {
        strcpy(ext, "A block's model.");
        return ext;
    }

    else if (strcmpm(ext, "ITEM.GBX"))
    {
        strcpy(ext, "Custom Maniaplanet item.");
        return ext;
    }

    else if (strcmpm(ext, "BLOCK.GBX"))
    {
        strcpy(ext, "Custom Maniaplanet block.");
        return ext;
    }

    else if (strcmpm(ext, "TEXTURE.GBX"))
    {
        strcpy(ext, "Info about a texture that are used in materials.");
        return ext;
    }

    else if (strcmpm(ext, "MATERIAL.GBX"))
    {
        strcpy(ext, "Info about a material such as surface type that are used in Solids.");
        return ext;
    }

    else if (strcmpm(ext, "TMEDCLASSIC.GBX"))
    {
        strcpy(ext, "Block info.");
        return ext;
    }

    else if (strcmpm(ext, "GHOST.GBX"))
    {
        strcpy(ext, "Player ghosts in Trackmania and TrackMania Turbo.");
        return ext;
    }

    else if (strcmpm(ext, "CONTROLSTYLE.GBX"))
    {
        strcpy(ext, "Menu files.");
        return ext;
    }

    else if (strcmpm(ext, "SCORES.GBX"))
    {
        strcpy(ext, "Stores info about the player's best times.");
        return ext;
    }

    else if (strcmpm(ext, "PROFILE.GBX"))
    {
        strcpy(ext, "Stores a player's info such as their login.");
        return ext;
    }

    else if (strcmpm(ext, "DDS"))
    {
        strcpy(ext, "Almost every texture in the game uses this format.");
        return ext;
    }

    else if (strcmpm(ext, "PAK"))
    {
        strcpy(ext, "Stores environment data such as valid blocks.");
        return ext;
    }

    else if (strcmpm(ext, "LOC"))
    {
        strcpy(ext, "A locator. Locators allow the game to download content such as car skins from an external server.");
        return ext;
    }

    else if (strcmpm(ext, "SCRIPT.TXT"))
    {
        strcpy(ext, "Scripts for Maniaplanet such as menus and game modes.");
        return ext;
    }

    else if (strcmpm(ext, "XML"))
    {
        strcpy(ext, "ManiaLinks.");
        return ext;
    }

    else if (strcmpm(ext, "DEH"))
    {
        strcpy(ext, "DeHackEd files to mutate the game executable (not officially part of the DOOM engine)");
        return ext;
    }

    else if (strcmpm(ext, "DSG"))
    {
        strcpy(ext, "Saved game");
        return ext;
    }

    else if (strcmpm(ext, "LMP"))
    {
        strcpy(ext, "A lump is an entry in a DOOM wad.");
        return ext;
    }

    else if (strcmpm(ext, "LMP"))
    {
        strcpy(ext, "Saved demo recording");
        return ext;
    }

    else if (strcmpm(ext, "MUS"))
    {
        strcpy(ext, "Music file (usually contained within a WAD file)");
        return ext;
    }

    else if (strcmpm(ext, "WAD"))
    {
        strcpy(ext, "Data storage (contains music, maps, and textures)");
        return ext;
    }

    else if (strcmpm(ext, "BSP"))
    {
        strcpy(ext, "BSP: (For Binary space partitioning) compiled map format");
        return ext;
    }

    else if (strcmpm(ext, "MAP"))
    {
        strcpy(ext, "MAP: Raw map format used by editors like GtkRadiant or QuArK");
        return ext;
    }

    else if (strcmpm(ext, "MDL, MD2, MD3, MD5"))
    {
        strcpy(ext, "MDL/MD2/MD3/MD5: Model for an item used in the game");
        return ext;
    }

    else if (strcmpm(ext, "PAK, PK2"))
    {
        strcpy(ext, "PAK/PK2: Data storage");
        return ext;
    }

    else if (strcmpm(ext, "PK3, PK4"))
    {
        strcpy(ext, "PK3/PK4: used by the Quake II, Quake III Arena and Quake 4 game engines, respectively, to store game data, textures etc. They are actually .zip files.");
        return ext;
    }

    else if (strcmpm(ext, ".dat"))
    {
        strcpy(ext, "not specific file type, often generic extension for 'data' files for a variety of applications, sometimes used for general data contained within the .PK3/PK4 files .fontdat - a .dat file used for formatting game fonts");
        return ext;
    }

    else if (strcmpm(ext, ".fontdat"))
    {
        strcpy(ext, "a .dat file used for formatting game fonts");
        return ext;
    }

    else if (strcmpm(ext, ".roq"))
    {
        strcpy(ext, "Video format");
        return ext;
    }

    else if (strcmpm(ext, ".sav"))
    {
        strcpy(ext, "Savegame/Savefile format");
        return ext;
    }

    else if (strcmpm(ext, "U"))
    {
        strcpy(ext, "Unreal script format");
        return ext;
    }

    else if (strcmpm(ext, "UAX"))
    {
        strcpy(ext, "Animations format for Unreal Engine 2");
        return ext;
    }

    else if (strcmpm(ext, "UMX"))
    {
        strcpy(ext, "Map format for Unreal Tournament");
        return ext;
    }

    else if (strcmpm(ext, "UMX"))
    {
        strcpy(ext, "Music format for Unreal Engine 1");
        return ext;
    }

    else if (strcmpm(ext, "UNR"))
    {
        strcpy(ext, "Map format for Unreal");
        return ext;
    }

    else if (strcmpm(ext, "UPK"))
    {
        strcpy(ext, "Package format for cooked content in Unreal Engine 3");
        return ext;
    }

    else if (strcmpm(ext, "USX"))
    {
        strcpy(ext, "Sound format for Unreal Engine 1 and Unreal Engine 2");
        return ext;
    }

    else if (strcmpm(ext, "UT2"))
    {
        strcpy(ext, "Map format for Unreal Tournament 2003 and Unreal Tournament 2004");
        return ext;
    }

    else if (strcmpm(ext, "UT3"))
    {
        strcpy(ext, "Map format for Unreal Tournament 3");
        return ext;
    }

    else if (strcmpm(ext, "UTX"))
    {
        strcpy(ext, "Texture format for Unreal Engine 1 and Unreal Engine 2");
        return ext;
    }

    else if (strcmpm(ext, "UXX"))
    {
        strcpy(ext, "Cache format; these are files a client downloaded from server (which can be converted to regular formats)");
        return ext;
    }

    else if (strcmpm(ext, "DMO"))
    {
        strcpy(ext, "Save game");
        return ext;
    }

    else if (strcmpm(ext, "GRP"))
    {
        strcpy(ext, "Data storage");
        return ext;
    }

    else if (strcmpm(ext, "MAP"))
    {
        strcpy(ext, "Map (usually constructed with BUILD.EXE)");
        return ext;
    }

    else if (strcmpm(ext, "SV"))
    {
        strcpy(ext, "Save Game");
        return ext;
    }

    else if (strcmpm(ext, "ITM"))
    {
        strcpy(ext, "Item File");
        return ext;
    }

    else if (strcmpm(ext, "SQF"))
    {
        strcpy(ext, "Format used for general editing");
        return ext;
    }

    else if (strcmpm(ext, "SQM"))
    {
        strcpy(ext, "Format used for mission files");
        return ext;
    }

    else if (strcmpm(ext, "PBO"))
    {
        strcpy(ext, "Binarized file used for compiled models");
        return ext;
    }

    else if (strcmpm(ext, "LIP"))
    {
        strcpy(ext, "Format that is created from WAV files to create in-game accurate lip-synch for character animations.");
        return ext;
    }

    else if (strcmpm(ext, "VMF"))
    {
        strcpy(ext, "Valve Hammer Map editor raw map file");
        return ext;
    }

    else if (strcmpm(ext, "VMX"))
    {
        strcpy(ext, "Valve Hammer Map editor backup map file");
        return ext;
    }

    else if (strcmpm(ext, "BSP"))
    {
        strcpy(ext, "Source Engine compiled map file");
        return ext;
    }

    else if (strcmpm(ext, "MDL"))
    {
        strcpy(ext, "Source Engine model format");
        return ext;
    }

    else if (strcmpm(ext, "SMD"))
    {
        strcpy(ext, "Source Engine uncompiled model format");
        return ext;
    }

    else if (strcmpm(ext, "PCF"))
    {
        strcpy(ext, "Source Engine particle effect file");
        return ext;
    }

    else if (strcmpm(ext, "HL2"))
    {
        strcpy(ext, "Half-Life 2 save format");
        return ext;
    }

    else if (strcmpm(ext, "DEM"))
    {
        strcpy(ext, "Source Engine demo format");
        return ext;
    }

    else if (strcmpm(ext, "VPK"))
    {
        strcpy(ext, "Source Engine pack format");
        return ext;
    }

    else if (strcmpm(ext, "VTF"))
    {
        strcpy(ext, "Source Engine texture format");
        return ext;
    }

    else if (strcmpm(ext, "VMT"))
    {
        strcpy(ext, "Source Engine material format.");
        return ext;
    }

    else if (strcmpm(ext, "CGB"))
    {
        strcpy(ext, "Pokemon Black and White/Pokemon Black 2 and White 2 C-Gear skins.");
        return ext;
    }

    else if (strcmpm(ext, "ARC"))
    {
        strcpy(ext, "used to store New Super Mario Bros. Wii level data");
        return ext;
    }

    else if (strcmpm(ext, "B"))
    {
        strcpy(ext, "used for Grand Theft Auto saved game files");
        return ext;
    }

    else if (strcmpm(ext, "BOL"))
    {
        strcpy(ext, "used for levels on Poing!PC");
        return ext;
    }

    else if (strcmpm(ext, "DBPF"))
    {
        strcpy(ext, "The Sims 2, DBPF, Package");
        return ext;
    }

    else if (strcmpm(ext, "DIVA"))
    {
        strcpy(ext, "Project DIVA timings, element coördinates, MP3 references, notes, animation poses and scores.");
        return ext;
    }

    else if (strcmpm(ext, "ESM, ESP"))
    {
        strcpy(ext, "Master and Plugin data archives for the Creation Engine");
        return ext;
    }

    else if (strcmpm(ext, "HAMBU"))
    {
        strcpy(ext, "format used by the Aidan's Funhouse game RGTW for storing map data[30]");
        return ext;
    }

    else if (strcmpm(ext, "HE0, HE2, HE4"))
    {
        strcpy(ext, "HE games File");
        return ext;
    }

    else if (strcmpm(ext, "GCF"))
    {
        strcpy(ext, "format used by the Steam content management system for file archives");
        return ext;
    }

    else if (strcmpm(ext, "IMG"))
    {
        strcpy(ext, "format used by Renderware-based Grand Theft Auto games for data storage");
        return ext;
    }

    else if (strcmpm(ext, "LOVE"))
    {
        strcpy(ext, "format used by the LOVE2D Engine[31]");
        return ext;
    }

    else if (strcmpm(ext, "MAP"))
    {
        strcpy(ext, "format used by Halo: Combat Evolved for archive compression, Doom³, and various other games");
        return ext;
    }

    else if (strcmpm(ext, "MCA"))
    {
        strcpy(ext, "format used by Minecraft for storing data for in-game worlds[32]");
        return ext;
    }

    else if (strcmpm(ext, "NBT"))
    {
        strcpy(ext, "format used by Minecraft for storing program variables along with their (Java) type identifiers");
        return ext;
    }

    else if (strcmpm(ext, "OEC"))
    {
        strcpy(ext, "format used by OE-Cake for scene data storage");
        return ext;
    }

    else if (strcmpm(ext, "OSB"))
    {
        strcpy(ext, "osu! storyboard data");
        return ext;
    }

    else if (strcmpm(ext, "OSC"))
    {
        strcpy(ext, "osu!stream combined stream data");
        return ext;
    }

    else if (strcmpm(ext, "OSF2"))
    {
        strcpy(ext, "free osu!stream song file");
        return ext;
    }

    else if (strcmpm(ext, "OSR"))
    {
        strcpy(ext, "osu! replay data");
        return ext;
    }

    else if (strcmpm(ext, "OSU"))
    {
        strcpy(ext, "osu! beatmap data");
        return ext;
    }

    else if (strcmpm(ext, "OSZ2"))
    {
        strcpy(ext, "paid osu!stream song file");
        return ext;
    }

    else if (strcmpm(ext, "P3D"))
    {
        strcpy(ext, "format for panda3d by Disney");
        return ext;
    }

    else if (strcmpm(ext, "PLAGUEINC"))
    {
        strcpy(ext, "format used by Plague Inc. for storing custom scenario information[33]");
        return ext;
    }

    else if (strcmpm(ext, "POD"))
    {
        strcpy(ext, "format used by Terminal Reality");
        return ext;
    }

    else if (strcmpm(ext, "RCT"))
    {
        strcpy(ext, "Used for templates and save files in RollerCoaster Tycoon games");
        return ext;
    }

    else if (strcmpm(ext, "REP"))
    {
        strcpy(ext, "used by Blizzard Entertainment for scenario replays in StarCraft.");
        return ext;
    }

    else if (strcmpm(ext, "Simcity, DBPF, .dat, .SC4Lot, .SC4Model"))
    {
        strcpy(ext, "All game plugins use this format, commonly with different file extensions(Simcity 4)");
        return ext;
    }

    else if (strcmpm(ext, "SMZIP"))
    {
        strcpy(ext, "ZIP-based package for StepMania songs, themes and announcer packs.");
        return ext;
    }

    else if (strcmpm(ext, "SOLITAIRETHEME8"))
    {
        strcpy(ext, "A solitaire theme for Windows solitaire");
        return ext;
    }

    else if (strcmpm(ext, "USLD"))
    {
        strcpy(ext, "format used by Unison Shift to store level layouts.");
        return ext;
    }

    else if (strcmpm(ext, "VVVVVV"))
    {
        strcpy(ext, "format used by VVVVVV");
        return ext;
    }

    else if (strcmpm(ext, "CPS"))
    {
        strcpy(ext, "format used by The Powder Toy, Powder Toy save");
        return ext;
    }

    else if (strcmpm(ext, "STM"))
    {
        strcpy(ext, "format used by The Powder Toy, Powder Toy stamp");
        return ext;
    }

    else if (strcmpm(ext, "PKG"))
    {
        strcpy(ext, "format used by Bungie for the PC Beta of Destiny 2, for nearly all the game's assets.");
        return ext;
    }

    else if (strcmpm(ext, "CHR"))
    {
        strcpy(ext, "format used by Team Salvato, for the character files of Doki Doki Literature Club!");
        return ext;
    }

    else if (strcmpm(ext, "Z5"))
    {
        strcpy(ext, "format used by Z-machine for story files in interactive fiction.");
        return ext;
    }

    else if (strcmpm(ext, "scworld"))
    {
        strcpy(ext, "format used by Survivalcraft to store sandbox worlds.");
        return ext;
    }

    else if (strcmpm(ext, "scskin"))
    {
        strcpy(ext, "format used by Survivalcraft to store player skins.");
        return ext;
    }

    else if (strcmpm(ext, "scbtex"))
    {
        strcpy(ext, "format used by Survivalcraft to store block textures.");
        return ext;
    }

    else if (strcmpm(ext, "prison"))
    {
        strcpy(ext, "format used by Prison Architect to save prisons");
        return ext;
    }

    else if (strcmpm(ext, "escape"))
    {
        strcpy(ext, "format used by Prison Architect to save escape attempts");
        return ext;
    }

    else if (strcmpm(ext, "WBFS"))
    {
        strcpy(ext, "(Wii Backup File System)");
        return ext;
    }

    else if (strcmpm(ext, ".GBA"))
    {
        strcpy(ext, "Game Boy Advance ROM File");
        return ext;
    }

    else if (strcmpm(ext, ".pss"))
    {
        strcpy(ext, "Sony PlayStation 2 Game Video file and is used to store audio and video data by games for the PlayStation 2 console.");
        return ext;
    }

    else if (strcmpm(ext, ".a26"))
    {
        strcpy(ext, "Atari 2600");
        return ext;
    }

    else if (strcmpm(ext, ".a52"))
    {
        strcpy(ext, "Atari 5200");
        return ext;
    }

    else if (strcmpm(ext, ".a78"))
    {
        strcpy(ext, "Atari 7800");
        return ext;
    }

    else if (strcmpm(ext, ".lnx"))
    {
        strcpy(ext, "Atari Lynx");
        return ext;
    }

    else if (strcmpm(ext, ".jag, .j64"))
    {
        strcpy(ext, "an Atari Jaguar game from a Rom Cartridge");
        return ext;
    }

    else if (strcmpm(ext, ".iso, .wbfs, .wad, .wdf"))
    {
        strcpy(ext, "a Wii and WiiU disk/game");
        return ext;
    }

    else if (strcmpm(ext, ".gcm, .iso"))
    {
        strcpy(ext, "a GameCube disk/game");
        return ext;
    }

    else if (strcmpm(ext, ".min"))
    {
        strcpy(ext, "a Pokemon mini rom/game");
        return ext;
    }

    else if (strcmpm(ext, ".nds"))
    {
        strcpy(ext, "a Nintendo DS game from a Rom Cartridge");
        return ext;
    }

    else if (strcmpm(ext, ".dsi"))
    {
        strcpy(ext, "Nintendo DSiWare");
        return ext;
    }

    else if (strcmpm(ext, ".3ds"))
    {
        strcpy(ext, "Nintendo 3DS");
        return ext;
    }

    else if (strcmpm(ext, ".cia"))
    {
        strcpy(ext, "Nintendo 3DS Installation File (for installing games with the use of the FBI homebrew application)");
        return ext;
    }

    else if (strcmpm(ext, ".gb"))
    {
        strcpy(ext, "Game Boy (this applies to the original Game Boy and the Game Boy Color)");
        return ext;
    }

    else if (strcmpm(ext, ".gbc"))
    {
        strcpy(ext, "Game Boy Color");
        return ext;
    }

    else if (strcmpm(ext, ".gba"))
    {
        strcpy(ext, "a Game Boy Advance Game from a Rom Cartridge");
        return ext;
    }

    else if (strcmpm(ext, ".sav"))
    {
        strcpy(ext, "Game Boy Advance Saved Data Files");
        return ext;
    }

    else if (strcmpm(ext, ".sgm"))
    {
        strcpy(ext, "Visual Boy Advance Save States");
        return ext;
    }

    else if (strcmpm(ext, ".n64, .v64, .z64, .u64, .usa, .jap, .pal, .eur, .bin"))
    {
        strcpy(ext, "Nintendo 64");
        return ext;
    }

    else if (strcmpm(ext, ".pj"))
    {
        strcpy(ext, "Project 64 Save States");
        return ext;
    }

    else if (strcmpm(ext, ".nes"))
    {
        strcpy(ext, "Nintendo Entertainment System[35]");
        return ext;
    }

    else if (strcmpm(ext, ".fds"))
    {
        strcpy(ext, "Famicom Disk System");
        return ext;
    }

    else if (strcmpm(ext, ".jst"))
    {
        strcpy(ext, "Jnes Save States");
        return ext;
    }

    else if (strcmpm(ext, ".fc#"))
    {
        strcpy(ext, "FCEUX Save States (.fc#, where # is any character, usually a number)");
        return ext;
    }

    else if (strcmpm(ext, ".gg"))
    {
        strcpy(ext, "Game Gear");
        return ext;
    }

    else if (strcmpm(ext, ".sms"))
    {
        strcpy(ext, "Master System");
        return ext;
    }

    else if (strcmpm(ext, ".sg"))
    {
        strcpy(ext, "SG-1000");
        return ext;
    }

    else if (strcmpm(ext, ".smd, .bin"))
    {
        strcpy(ext, "Mega Drive/Genesis");
        return ext;
    }

    else if (strcmpm(ext, ".32x"))
    {
        strcpy(ext, "Sega 32X");
        return ext;
    }

    else if (strcmpm(ext, ".smc, .078, .sfc"))
    {
        strcpy(ext, "Super NES (.078 is for split ROMs, which are rare)");
        return ext;
    }

    else if (strcmpm(ext, ".fig"))
    {
        strcpy(ext, "Super Famicom (Japanese releases are rarely .fig, above extensions are more common)");
        return ext;
    }

    else if (strcmpm(ext, ".srm"))
    {
        strcpy(ext, "Super NES Saved Data Files");
        return ext;
    }

    else if (strcmpm(ext, ".zst, .zs1-.zs9, .z10-.z99"))
    {
        strcpy(ext, "ZSNES Save States (.zst, .zs1-.zs9, .z10-.z99)");
        return ext;
    }

    else if (strcmpm(ext, ".frz, .000-.008"))
    {
        strcpy(ext, "Snes9X Save States");
        return ext;
    }

    else if (strcmpm(ext, ".pce"))
    {
        strcpy(ext, "TurboGrafx-16/PC Engine");
        return ext;
    }

    else if (strcmpm(ext, ".npc, .ngp"))
    {
        strcpy(ext, "Neo Geo Pocket");
        return ext;
    }

    else if (strcmpm(ext, ".ngc"))
    {
        strcpy(ext, "Neo Geo Pocket Color");
        return ext;
    }

    else if (strcmpm(ext, ".vb"))
    {
        strcpy(ext, "Virtual Boy");
        return ext;
    }

    else if (strcmpm(ext, ".int"))
    {
        strcpy(ext, "Intellivision");
        return ext;
    }

    else if (strcmpm(ext, ".min"))
    {
        strcpy(ext, "Pokémon Mini");
        return ext;
    }

    else if (strcmpm(ext, ".vec"))
    {
        strcpy(ext, "Vectrex");
        return ext;
    }

    else if (strcmpm(ext, ".bin"))
    {
        strcpy(ext, "Odyssey²");
        return ext;
    }

    else if (strcmpm(ext, ".ws"))
    {
        strcpy(ext, "WonderSwan");
        return ext;
    }

    else if (strcmpm(ext, ".wsc"))
    {
        strcpy(ext, "WonderSwan Color");
        return ext;
    }

    else if (strcmpm(ext, ".tzx"))
    {
        strcpy(ext, "ZX Spectrum (for exact copies of ZX Spectrum games)");
        return ext;
    }

    else if (strcmpm(ext, "TAP"))
    {
        strcpy(ext, "for tape images without copy protection");
        return ext;
    }

    else if (strcmpm(ext, "Z80, SNA"))
    {
        strcpy(ext, "(for snapshots of the emulator RAM)");
        return ext;
    }

    else if (strcmpm(ext, "DSK"))
    {
        strcpy(ext, "(for disk images)");
        return ext;
    }

    else if (strcmpm(ext, ".tap"))
    {
        strcpy(ext, "Commodore 64 (.tap) (for tape images including copy protection)");
        return ext;
    }

    else if (strcmpm(ext, "T64"))
    {
        strcpy(ext, "(for tape images without copy protection, considerably smaller than .tap files)");
        return ext;
    }

    else if (strcmpm(ext, "D64"))
    {
        strcpy(ext, "(for disk images)");
        return ext;
    }

    else if (strcmpm(ext, "CRT"))
    {
        strcpy(ext, "(for cartridge images)");
        return ext;
    }

    else if (strcmpm(ext, ".adf"))
    {
        strcpy(ext, "Amiga (.adf) (for 880K diskette images)");
        return ext;
    }

    else if (strcmpm(ext, "ADZ"))
    {
        strcpy(ext, "GZip-compressed version of the above.");
        return ext;
    }

    else if (strcmpm(ext, "DMS"))
    {
        strcpy(ext, "Disk Masher System, previously used as a disk-archiving system native to the Amiga, also supported by emulators.");
        return ext;
    }

    else if (strcmpm(ext, ".pss"))
    {
        strcpy(ext, "A Sony PlayStation 2 Game Video file and is used to store audio and video data by games for the PlayStation 2 console.");
        return ext;
    }

    else if (strcmpm(ext, ".vfd"))
    {
        strcpy(ext, "Virtual Floppy Disk");
        return ext;
    }

    else if (strcmpm(ext, ".vhd"))
    {
        strcpy(ext, "Virtual Hard Disk");
        return ext;
    }

    else if (strcmpm(ext, ".vud"))
    {
        strcpy(ext, "Virtual Undo Disk");
        return ext;
    }

    else if (strcmpm(ext, ".vmc"))
    {
        strcpy(ext, "Virtual Machine Configuration");
        return ext;
    }

    else if (strcmpm(ext, ".vsv"))
    {
        strcpy(ext, "Virtual Machine Saved State");
        return ext;
    }

    else if (strcmpm(ext, ".log"))
    {
        strcpy(ext, "Virtual Machine Logfile");
        return ext;
    }

    else if (strcmpm(ext, ".vmdk, .dsk"))
    {
        strcpy(ext, "Virtual Machine Disk");
        return ext;
    }

    else if (strcmpm(ext, ".nvram"))
    {
        strcpy(ext, "Virtual Machine BIOS");
        return ext;
    }

    else if (strcmpm(ext, ".vmem"))
    {
        strcpy(ext, "Virtual Machine paging file");
        return ext;
    }

    else if (strcmpm(ext, ".vmsd"))
    {
        strcpy(ext, "Virtual Machine snapshot metadata");
        return ext;
    }

    else if (strcmpm(ext, ".vmsn"))
    {
        strcpy(ext, "Virtual Machine snapshot");
        return ext;
    }

    else if (strcmpm(ext, ".vmss, .std"))
    {
        strcpy(ext, "Virtual Machine suspended state");
        return ext;
    }

    else if (strcmpm(ext, ".vmtm"))
    {
        strcpy(ext, "Virtual Machine team data");
        return ext;
    }

    else if (strcmpm(ext, ".vmx, .cfg"))
    {
        strcpy(ext, "Virtual Machine configuration");
        return ext;
    }

    else if (strcmpm(ext, ".vmxf"))
    {
        strcpy(ext, "Virtual Machine team configuration");
        return ext;
    }

    else if (strcmpm(ext, ".vdi"))
    {
        strcpy(ext, "VirtualBox virtual disk image");
        return ext;
    }

    else if (strcmpm(ext, ".vbox-extpack"))
    {
        strcpy(ext, "VirtualBox extension pack");
        return ext;
    }

    else if (strcmpm(ext, ".hdd"))
    {
        strcpy(ext, "Virtual Machine hard disk");
        return ext;
    }

    else if (strcmpm(ext, ".pvs"))
    {
        strcpy(ext, "Virtual Machine preferences/configuration");
        return ext;
    }

    else if (strcmpm(ext, ".sav"))
    {
        strcpy(ext, "Virtual Machine saved state");
        return ext;
    }

    else if (strcmpm(ext, ".cow"))
    {
        strcpy(ext, "Copy-on-write");
        return ext;
    }

    else if (strcmpm(ext, ".qcow"))
    {
        strcpy(ext, "QEMU copy-on-write");
        return ext;
    }

    else if (strcmpm(ext, ".qcow2"))
    {
        strcpy(ext, "QEMU copy-on-write - version 2");
        return ext;
    }

    else if (strcmpm(ext, ".qed"))
    {
        strcpy(ext, "QEMU enhanced disk format");
        return ext;
    }

    else if (strcmpm(ext, "DTD"))
    {
        strcpy(ext, "Document Type Definition (standard), MUST be public and free");
        return ext;
    }

    else if (strcmpm(ext, ".html, .htm"))
    {
        strcpy(ext, "HTML HyperText Markup Language");
        return ext;
    }

    else if (strcmpm(ext, ".xhtml, .xht"))
    {
        strcpy(ext, "XHTML eXtensible HyperText Markup Language");
        return ext;
    }

    else if (strcmpm(ext, ".mht, .mhtml"))
    {
        strcpy(ext, "MHTML Archived HTML, store all data on one web page (text, images, etc.) in one big file");
        return ext;
    }

    else if (strcmpm(ext, ".maff"))
    {
        strcpy(ext, "MAF web archive based on ZIP");
        return ext;
    }

    else if (strcmpm(ext, ".asp"))
    {
        strcpy(ext, "ASP Microsoft Active Server Page");
        return ext;
    }

    else if (strcmpm(ext, ".aspx"))
    {
        strcpy(ext, "ASPX Microsoft Active Server Page. NET");
        return ext;
    }

    else if (strcmpm(ext, ".adp"))
    {
        strcpy(ext, "ADP AOLserver Dynamic Page");
        return ext;
    }

    else if (strcmpm(ext, ".bml"))
    {
        strcpy(ext, "BML Better Markup Language (templating)");
        return ext;
    }

    else if (strcmpm(ext, ".cfm"))
    {
        strcpy(ext, "CFM ColdFusion");
        return ext;
    }

    else if (strcmpm(ext, ".cgi"))
    {
        strcpy(ext, "CGI");
        return ext;
    }

    else if (strcmpm(ext, ".ihtml"))
    {
        strcpy(ext, "iHTML Inline HTML");
        return ext;
    }

    else if (strcmpm(ext, ".jsp"))
    {
        strcpy(ext, "JSP JavaServer Pages");
        return ext;
    }

    else if (strcmpm(ext, ".las, .lasso, .lassoapp"))
    {
        strcpy(ext, "Lasso, A file created or served with the Lasso Programming Language");
        return ext;
    }

    else if (strcmpm(ext, ".pl"))
    {
        strcpy(ext, "Perl");
        return ext;
    }

    else if (strcmpm(ext, ".php, .php?, .phtml"))
    {
        strcpy(ext, "PHP ? is version number (previously abbreviated Personal Home Page, later changed to PHP: Hypertext Preprocessor)");
        return ext;
    }

    else if (strcmpm(ext, ".shtml"))
    {
        strcpy(ext, "SSI HTML with Server Side Includes (Apache)");
        return ext;
    }

    else if (strcmpm(ext, ".stm"))
    {
        strcpy(ext, "SSI HTML with Server Side Includes (Apache)");
        return ext;
    }

    else if (strcmpm(ext, ".atom, .xml"))
    {
        strcpy(ext, "Atom Another syndication format.");
        return ext;
    }

    else if (strcmpm(ext, ".eml"))
    {
        strcpy(ext, "EML Format used by several desktop email clients.");
        return ext;
    }

    else if (strcmpm(ext, ".jsonld"))
    {
        strcpy(ext, "JSON-LD A JSON-based serialization for linked data.");
        return ext;
    }

    else if (strcmpm(ext, ".kprx"))
    {
        strcpy(ext, "KPRX A XML-based serialization for workflow definition generated by K2.");
        return ext;
    }

    else if (strcmpm(ext, ".ps"))
    {
        strcpy(ext, "PS A XML-based serialization for test automation scripts called PowerScripts for K2 based applications.");
        return ext;
    }

    else if (strcmpm(ext, ".metalink, .met"))
    {
        strcpy(ext, "Metalink A format to list metadata about downloads, such as mirrors, checksums, and other information.");
        return ext;
    }

    else if (strcmpm(ext, ".rss, .xml"))
    {
        strcpy(ext, "RSS Syndication format.");
        return ext;
    }

    else if (strcmpm(ext, ".markdown, .md"))
    {
        strcpy(ext, "Markdown Plain text formatting syntax, which is popularly used to format 'readme' files.");
        return ext;
    }

    else if (strcmpm(ext, ".se"))
    {
        strcpy(ext, "Shuttle Another lightweight markup language.");
        return ext;
    }

    else if (strcmpm(ext, "AXD"))
    {
        strcpy(ext, "cookie extensions found in temporary internet folder");
        return ext;
    }

    else if (strcmpm(ext, "APK"))
    {
        strcpy(ext, "Android Package Kit");
        return ext;
    }

    else if (strcmpm(ext, "BDF"))
    {
        strcpy(ext, "Binary Data Format - raw data from recovered blocks of unallocated space on a hard drive");
        return ext;
    }

    else if (strcmpm(ext, "CBP"))
    {
        strcpy(ext, "CD Box Labeler Pro, CentraBuilder, Code::Blocks Project File, Conlab Project");
        return ext;
    }

    else if (strcmpm(ext, "CEX"))
    {
        strcpy(ext, "SolidWorks Enterprise PDM Vault File");
        return ext;
    }

    else if (strcmpm(ext, "COL"))
    {
        strcpy(ext, "Nintendo GameCube proprietary collision file (.col)");
        return ext;
    }

    else if (strcmpm(ext, "CREDX"))
    {
        strcpy(ext, "CredX Dat File");
        return ext;
    }

    else if (strcmpm(ext, "DDB"))
    {
        strcpy(ext, "Generating code for Vocaloid singers voice (see .DDI)");
        return ext;
    }

    else if (strcmpm(ext, "DDI"))
    {
        strcpy(ext, "Vocaloid phoneme library (Japanese, English, Korean, Spanish, Chinese, Catalan)");
        return ext;
    }

    else if (strcmpm(ext, "DUPX"))
    {
        strcpy(ext, "DuupeCheck database management tool project file");
        return ext;
    }

    else if (strcmpm(ext, "FTM"))
    {
        strcpy(ext, "Family Tree Maker data file");
        return ext;
    }

    else if (strcmpm(ext, "FTMB"))
    {
        strcpy(ext, "Family Tree Maker backup file");
        return ext;
    }

    else if (strcmpm(ext, "GA3"))
    {
        strcpy(ext, "Graphical Analysis 3");
        return ext;
    }

    else if (strcmpm(ext, ".ged"))
    {
        strcpy(ext, "GEDCOM (GEnealogical Data COMmunication) format to exchange genealogy data between different genealogy software");
        return ext;
    }

    else if (strcmpm(ext, "HLP"))
    {
        strcpy(ext, "Windows help file");
        return ext;
    }

    else if (strcmpm(ext, "IGC"))
    {
        strcpy(ext, "flight tracks downloaded from GPS devices in the FAI's prescribed format");
        return ext;
    }

    else if (strcmpm(ext, "INF"))
    {
        strcpy(ext, "similar format to INI file; used to install device drivers under Windows, inter alia.");
        return ext;
    }

    else if (strcmpm(ext, "JAM"))
    {
        strcpy(ext, "JAM Message Base Format for BBSes");
        return ext;
    }

    else if (strcmpm(ext, "KMC"))
    {
        strcpy(ext, "tests made with KatzReview's MegaCrammer");
        return ext;
    }

    else if (strcmpm(ext, "KCL"))
    {
        strcpy(ext, "Nintendo GameCube/Wii proprietary collision file (.kcl)");
        return ext;
    }

    else if (strcmpm(ext, "KTR"))
    {
        strcpy(ext, "Hitachi Vantara Pentaho Data Integration/Kettle Transformation Project file");
        return ext;
    }

    else if (strcmpm(ext, "LNK"))
    {
        strcpy(ext, "Microsoft Windows format for Hyperlinks to Executables");
        return ext;
    }

    else if (strcmpm(ext, "LSM"))
    {
        strcpy(ext, "LSMaker script file (program using layered .jpg to create special effects; specifically designed to render lightsabers from the Star Wars universe) (.lsm)");
        return ext;
    }

    else if (strcmpm(ext, "MELSAVE"))
    {
        strcpy(ext, "Melon Playground build save file");
        return ext;
    }

    else if (strcmpm(ext, "MELMOD"))
    {
        strcpy(ext, "Melon Playground mod file");
        return ext;
    }

    else if (strcmpm(ext, "NARC"))
    {
        strcpy(ext, "Archive format used in Nintendo DS games.");
        return ext;
    }

    else if (strcmpm(ext, "OER"))
    {
        strcpy(ext, "AU OER Tool, Open Educational Resource editor");
        return ext;
    }

    else if (strcmpm(ext, "PA"))
    {
        strcpy(ext, "Used to assign sound effects to materials in KCL files (.pa)");
        return ext;
    }

    else if (strcmpm(ext, "PIF"))
    {
        strcpy(ext, "Used to run MS-DOS programs under Windows");
        return ext;
    }

    else if (strcmpm(ext, "POR"))
    {
        strcpy(ext, "So called 'portable' SPSS files, readable by PSPP");
        return ext;
    }

    else if (strcmpm(ext, "PXZ"))
    {
        strcpy(ext, "Compressed file to exchange media elements with PSALMO");
        return ext;
    }

    else if (strcmpm(ext, "RISE"))
    {
        strcpy(ext, "File containing RISE generated information model evolution");
        return ext;
    }

    else if (strcmpm(ext, "SCR"))
    {
        strcpy(ext, "Windows Screen Saver file");
        return ext;
    }

    else if (strcmpm(ext, "TOPC"))
    {
        strcpy(ext, "TopicCrunch SEO Project file holding keywords, domain, and search engine settings (ASCII)");
        return ext;
    }

    else if (strcmpm(ext, "XLF"))
    {
        strcpy(ext, "Utah State University Extensible LADAR Format");
        return ext;
    }

    else if (strcmpm(ext, "XMC"))
    {
        strcpy(ext, "Assisted contact lists format, based on XML and used in kindergartens and schools");
        return ext;
    }

    else if (strcmpm(ext, "ZED"))
    {
        strcpy(ext, "My Heritage Family Tree");
        return ext;
    }

    else if (strcmpm(ext, "zone"))
    {
        strcpy(ext, "Zone file a text file containing a DNS zone");
        return ext;
    }

    else if (strcmpm(ext, "FX"))
    {
        strcpy(ext, "Microsoft DirectX plain text effects and properties for the associated file and are used to specify the textures, shading, rendering, lighting and other 3D effects (.fx)");
        return ext;
    }

    else if (strcmpm(ext, "MIFRAMES"))
    {
        strcpy(ext, "Mine-imator keyframes file (.miframes)");
        return ext;
    }

    else if (strcmpm(ext, "MILANGUAGE"))
    {
        strcpy(ext, "Mine-Imator language data file (.milanguage)");
        return ext;
    }

    else if (strcmpm(ext, "MIDATA"))
    {
        strcpy(ext, "Mine-Imator data file (.midata)");
        return ext;
    }

    else if (strcmpm(ext, "BCA"))
    {
        strcpy(ext, "Short for Burst Cutting Area Holds the information of the circular area near the center of a DVD, HD DVD or Blu-ray Disc, it is usually 64 bytes in size. (.bca)");
        return ext;
    }

    else if (strcmpm(ext, "ANI"))
    {
        strcpy(ext, "Animated cursor");
        return ext;
    }

    else if (strcmpm(ext, "CUR"))
    {
        strcpy(ext, "Cursor file");
        return ext;
    }

    else if (strcmpm(ext, "Smes"))
    {
        strcpy(ext, "Hawk's Dock configuration file");
        return ext;
    }

    else if (strcmpm(ext, "CSV"))
    {
        strcpy(ext, "comma-separated values");
        return ext;
    }

    else if (strcmpm(ext, "HTML"))
    {
        strcpy(ext, "hyper text markup language");
        return ext;
    }

    else if (strcmpm(ext, "CSS"))
    {
        strcpy(ext, "cascading style sheets");
        return ext;
    }

    else if (strcmpm(ext, "INI"))
    {
        strcpy(ext, "a configuration text file whose format is substantially similar between applications");
        return ext;
    }

    else if (strcmpm(ext, "JSON"))
    {
        strcpy(ext, "JavaScript Object Notation is an openly used data format now used by many languages, not just JavaScript");
        return ext;
    }

    else if (strcmpm(ext, "TSV"))
    {
        strcpy(ext, "tab-separated values");
        return ext;
    }

    else if (strcmpm(ext, "XML"))
    {
        strcpy(ext, "an open data format");
        return ext;
    }

    else if (strcmpm(ext, "YAML"))
    {
        strcpy(ext, "an open data format");
        return ext;
    }

    else if (strcmpm(ext, "ReStructuredText"))
    {
        strcpy(ext, "an open text format for technical documents used mainly in the Python programming language");
        return ext;
    }

    else if (strcmpm(ext, ".md"))
    {
        strcpy(ext, "Markdown an open lightweight markup language to create simple but rich text, often used to format README files");
        return ext;
    }

    else if (strcmpm(ext, "AsciiDoc"))
    {
        strcpy(ext, "an open human-readable markup document format semantically equivalent to DocBook");
        return ext;
    }

    else if (strcmpm(ext, ".yni"))
    {
        strcpy(ext, "a configuration file similar to YAML");
        return ext;
    }

    else if (strcmpm(ext, ".bak, .bk"))
    {
        strcpy(ext, "Bak file various backup formats: some just copies of data files, some in application-specific data backup formats, some formats for general file backup programs");
        return ext;
    }

    else if (strcmpm(ext, "BIN"))
    {
        strcpy(ext, "binary data, often memory dumps of executable code or data to be re-used by the same software that originated it");
        return ext;
    }

    else if (strcmpm(ext, "DAT"))
    {
        strcpy(ext, "data file, usually binary data proprietary to the program that created it, or an MPEG-1 stream of Video CD");
        return ext;
    }

    else if (strcmpm(ext, "DSK"))
    {
        strcpy(ext, "file representations of various disk storage images");
        return ext;
    }

    else if (strcmpm(ext, "RAW"))
    {
        strcpy(ext, "raw (unprocessed) data");
        return ext;
    }

    else if (strcmpm(ext, "SZH"))
    {
        strcpy(ext, "files that are associated with zero unique file types (the most prevalent being the Binary Data format)");
        return ext;
    }

    else if (strcmpm(ext, ".cnf, .conf, .cfg"))
    {
        strcpy(ext, "configuration file substantially software-specific");
        return ext;
    }

    else if (strcmpm(ext, ".log"))
    {
        strcpy(ext, "logfiles usually text, but sometimes binary");
        return ext;
    }

    else if (strcmpm(ext, ".asc, .text, .txt,"))
    {
        strcpy(ext, "human-readable plain text, usually no more specific");
        return ext;
    }

    else if (strcmpm(ext, "diff"))
    {
        strcpy(ext, "text file differences created by the program diff and applied as updates by patch");
        return ext;
    }

    else if (strcmpm(ext, ".!ut"))
    {
        strcpy(ext, "!UT partly complete uTorrent download");
        return ext;
    }

    else if (strcmpm(ext, ".crdownload"))
    {
        strcpy(ext, "CRDOWNLOAD partly complete or incomplete Google Chrome or Microsoft Edge download");
        return ext;
    }

    else if (strcmpm(ext, ".opdownload"))
    {
        strcpy(ext, "OPDOWNLOAD partly complete or incomplete Opera download");
        return ext;
    }

    else if (strcmpm(ext, ".part"))
    {
        strcpy(ext, "PART partly complete Mozilla Firefox or Transmission download");
        return ext;
    }

    else if (strcmpm(ext, ".partial"))
    {
        strcpy(ext, "PARTIAL partly complete Internet Explorer or Edge Legacy download");
        return ext;
    }

    else if (strcmpm(ext, ".temp, .tmp"))
    {
        strcpy(ext, "Temporary file sometimes in a specific format, but often just raw data in the middle of processing");
        return ext;
    }

    strcpy(ext, "Unknown Filetype\n");
    return ext;
}

int main(int argc, const char *argv[])
{
    // insert code here...

    if (argc != 2)
    {
        printf("Please have a file as the only argument.\n");
        return 1;
    }

    char *desc = whatsThis(argv[1]);
    printf("%s", desc);
    free(desc);
    return 0;
}
