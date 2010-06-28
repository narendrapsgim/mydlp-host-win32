/*
 *  Static filetype data for use when daily.ftm is not available.
 *
 *  Copyright (C) 2007-2009 Sourcefire, Inc.
 *
 *  Authors: Tomasz Kojm
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1301, USA.
 */

#ifndef __FILETYPES_INT_H
#define __FILETYPES_INT_H

/* Generated with the following perl script:
#!/usr/bin/perl
open(FT, "daily.ftm") or die "Can't open daily.ftm";
print "static const char *ftypes_int[] = {\n";
while($line = <FT>) {
    chomp($line);
    print "  \"$line\",\n";
}
print "  NULL\n};\n"
*/

static const char *ftypes_int[] = {
  "0:0:000001b3:MPEG video stream:CL_TYPE_ANY:CL_TYPE_IGNORED",
  "0:0:000001ba:MPEG sys stream:CL_TYPE_ANY:CL_TYPE_IGNORED",
  "0:0:1f8b:GZip:CL_TYPE_ANY:CL_TYPE_GZ",
  "0:0:23407e5e:SCRENC:CL_TYPE_ANY:CL_TYPE_SCRENC",
  "0:0:252150532d41646f62652d:PostScript:CL_TYPE_ANY:CL_TYPE_PS",
  "0:0:255044462d:PDF document:CL_TYPE_ANY:CL_TYPE_PDF",
  "0:0:28546869732066696c65206d75737420626520636f6e76657274656420776974682042696e48657820342e3029:BinHex:CL_TYPE_ANY:CL_TYPE_BINHEX",
  "0:0:2e524d46:Real Media File:CL_TYPE_ANY:CL_TYPE_IGNORED",
  "0:0:3e46726f6d20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:424d:BMP:CL_TYPE_ANY:CL_TYPE_GRAPHICS",
  "0:0:425a68:BZip:CL_TYPE_ANY:CL_TYPE_BZ",
  "0:0:446174653a20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:44656c6976657265642d546f3a20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:44656c69766572792d646174653a20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:456e76656c6f70652d746f3a20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:466f723a20:Eserv mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:46726f6d20:MBox:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:46726f6d3a20:Exim mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:474946:GIF:CL_TYPE_ANY:CL_TYPE_GRAPHICS",
  "0:0:48692e20546869732069732074686520716d61696c2d73656e64:Qmail bounce:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:494433:MP3:CL_TYPE_ANY:CL_TYPE_IGNORED",
  "0:0:49545346:MS CHM:CL_TYPE_ANY:CL_TYPE_MSCHM",
  "0:0:4d534346:MS CAB:CL_TYPE_ANY:CL_TYPE_MSCAB",
  "0:0:4d5a:MS-EXE/DLL:CL_TYPE_ANY:CL_TYPE_MSEXE",
  "0:0:4d6573736167652d49443a20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:4d6573736167652d49643a20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:4f676753:Ogg Stream:CL_TYPE_ANY:CL_TYPE_IGNORED",
  "0:0:504b0304:ZIP:CL_TYPE_ANY:CL_TYPE_ZIP",
  "0:0:504b3030504b0304:ZIP:CL_TYPE_ANY:CL_TYPE_ZIP",
  "0:0:52494646:RIFF:CL_TYPE_ANY:CL_TYPE_RIFF",
  "0:0:52494658:RIFX:CL_TYPE_ANY:CL_TYPE_RIFF",
  "0:0:52617221:RAR:CL_TYPE_ANY:CL_TYPE_RAR",
  "0:0:52656365697665643a20:Raw mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:52657475726e2d506174683a20:Maildir:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:52657475726e2d706174683a20:Maildir:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:535a4444:compress.exed:CL_TYPE_ANY:CL_TYPE_MSSZDD",
  "0:0:5375626a6563743a20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:546f3a20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:582d4170706172656e746c792d546f3a20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:582d455653:EVS mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:582d456e76656c6f70652d46726f6d3a20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:582d4f726967696e616c2d546f3a20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:582d5265616c2d546f3a20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:582d53696576653a20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:582d53796d616e7465632d:Symantec:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:582d5549444c3a20:Mail:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:60ea:ARJ:CL_TYPE_ANY:CL_TYPE_ARJ",
  "0:0:626567696e20:UUencoded:CL_TYPE_ANY:CL_TYPE_UUENCODED",
  "0:0:763a0a52656365697665643a20:VPOP3 Mail (UNIX):CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:763a0d0a52656365697665643a20:VPOP3 Mail (DOS):CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:789f3e22:TNEF:CL_TYPE_ANY:CL_TYPE_TNEF",
  "0:0:7f454c46:ELF:CL_TYPE_ANY:CL_TYPE_ELF",
  "0:0:89504e47:PNG:CL_TYPE_ANY:CL_TYPE_GRAPHICS",
  "0:0:b6b9acaefeffffff:CryptFF:CL_TYPE_ANY:CL_TYPE_CRYPTFF",
  "0:0:d0cf11e0a1b11ae1:OLE2 container:CL_TYPE_ANY:CL_TYPE_MSOLE2",
  "0:0:ffd8ff:JPEG:CL_TYPE_ANY:CL_TYPE_GRAPHICS",
  "0:0:fffb90:MP3:CL_TYPE_ANY:CL_TYPE_IGNORED",
  "0:6:45786966:JPEG:CL_TYPE_ANY:CL_TYPE_GRAPHICS",
  "0:6:4a464946:JPEG:CL_TYPE_ANY:CL_TYPE_GRAPHICS",
  "0:8:19040010:SIS:CL_TYPE_ANY:CL_TYPE_SIS",
  "1:*:3c4120*(68|48)(72|52)4546:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c4120*(68|48)(72|52)6566:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c484541443e:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c48544d4c3e:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c486561643e:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c48746d6c3e:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c494652414d45:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c494d47:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c496d67:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c4f424a454354:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c4f626a656374:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c534352495054:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c536372697074:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c5441424c45:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c6120*(68|48)(72|52)4546:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c6120*(68|48)(72|52)6566:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c686561643e:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c68746d6c3e:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c696672616d65:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c696d67:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c6f626a656374:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c736372697074:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:3c7461626c65:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "1:*:4d534346:CAB-SFX:CL_TYPE_ANY:CL_TYPE_CABSFX",
  "1:*:4d5a{60-300}50450000:PE:CL_TYPE_ANY:CL_TYPE_MSEXE",
  "1:*:504b0304:ZIP-SFX:CL_TYPE_ANY:CL_TYPE_ZIPSFX",
  "1:*:526172211a0700:RAR-SFX:CL_TYPE_ANY:CL_TYPE_RARSFX",
  "1:*:60ea{7}0002:ARJ-SFX:CL_TYPE_ANY:CL_TYPE_ARJSFX",
  "1:*:60ea{7}0102:ARJ-SFX:CL_TYPE_ANY:CL_TYPE_ARJSFX",
  "1:*:60ea{7}0202:ARJ-SFX:CL_TYPE_ANY:CL_TYPE_ARJSFX",
  "1:*:a3484bbe986c4aa9994c530a86d6487d41553321454130(35|36):AUTOIT:CL_TYPE_ANY:CL_TYPE_AUTOIT",
  "1:*:efbeadde4e756c6c736f6674496e7374:NSIS:CL_TYPE_ANY:CL_TYPE_NULSFT",
  "0:0:5349502d48495420285349502f48:SIP log:CL_TYPE_ANY:CL_TYPE_IGNORED",
  "1:0:3c2540204c414e4755414745203d:HTML data:CL_TYPE_ANY:CL_TYPE_HTML",
  "0:0:7b5c727466:RTF:CL_TYPE_ANY:CL_TYPE_RTF:30",
  "1:0,1024:255044462d??2e:PDF:CL_TYPE_ANY:CL_TYPE_PDF:30",
  "1:0,1024:257064662d??2e:PDF:CL_TYPE_ANY:CL_TYPE_PDF:30",
  "0:257:7573746172:TAR-POSIX:CL_TYPE_ANY:CL_TYPE_POSIX_TAR",
  "0:0:5b616c69617365735d:mirc ini:CL_TYPE_ANY:CL_TYPE_SCRIPT",
  "1:0,1024:0a(46|66)726f6d3a20{-1024}0a(4d|6d)(49|69)(4d|6d)(45|65)2d(56|76)657273696f6e3a20:Mail file:CL_TYPE_ANY:CL_TYPE_MAIL",
  "1:0,1024:0a(46|66)726f6d3a20{-2048}0a(43|63)6f6e74656e742d(54|74)7970653a20:Mail file:CL_TYPE_ANY:CL_TYPE_MAIL",
  "1:0,1024:0a(4d|6d)(49|69)(4d|6d)(45|65)2d(56|76)657273696f6e3a20{-2048}0a(43|63)6f6e74656e742d(54|74)7970653a20:Mail file:CL_TYPE_ANY:CL_TYPE_MAIL",
  "1:0,1024:0a(4d|6d)6573736167652d(49|69)643a20{-1024}0a(43|63)6f6e74656e742d(54|74)7970653a20:Mail file:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:cefaedfe:Mach-O LE:CL_TYPE_ANY:CL_TYPE_MACHO:45",
  "0:0:cffaedfe:Mach-O LE 64-bit:CL_TYPE_ANY:CL_TYPE_MACHO:45",
  "0:0:feedface:Mach-O BE:CL_TYPE_ANY:CL_TYPE_MACHO:45",
  "0:0:feedfacf:Mach-O BE 64-bit:CL_TYPE_ANY:CL_TYPE_MACHO:45",
  "0:0:cafebabe:Universal Binary/Java Bytecode:CL_TYPE_ANY:CL_TYPE_MACHO_UNIBIN:46",
  "1:*:496e7374616c6c536869656c6400{292}0600000000000000????????????????0000000001:ISHIELD-MSI:CL_TYPE_ANY:CL_TYPE_ISHIELD_MSI:45",
  "0:0:377abcaf271c:7zip:CL_TYPE_ANY:CL_TYPE_7Z:47",
  "0:0:52656365697665642d5350463a20:Mail file:CL_TYPE_ANY:CL_TYPE_MAIL",
  "1:0,2048:0a(52|72)656365697665643a20{-2048}0a(43|63)6f6e74656e742d(54|74)7970653a20:Mail file:CL_TYPE_ANY:CL_TYPE_MAIL",
  "0:0:303730373031:CPIO NEWC:CL_TYPE_ANY:CL_TYPE_CPIO_NEWC:45",
  "0:0:303730373032:CPIO CRC:CL_TYPE_ANY:CL_TYPE_CPIO_CRC:45",
  "0:0:303730373037:CPIO ODC:CL_TYPE_ANY:CL_TYPE_CPIO_ODC:45",
  "0:0:71c7:CPIO OLD BINARY BE:CL_TYPE_ANY:CL_TYPE_CPIO_OLD:45",
  "0:0:c771:CPIO OLD BINARY LE:CL_TYPE_ANY:CL_TYPE_CPIO_OLD:45",
  "0:0:41433130:AUTOCAD DWG:CL_TYPE_ANY:CL_TYPE_AUTOCAD",
  "0:0:38425053:PHOTOSHOP PSD:CL_TYPE_ANY:CL_TYPE_PHOTOSHOP",
  "0:0:5061696e742053686f702050726f20496d6167652046696c65:PAINTSHOP PRO PSP:CL_TYPE_ANY:CL_TYPE_PAINTSHOP",
  "0:0:504b0304:COREL CDR:CL_TYPE_ANY:CL_TYPE_CORELDRAW",
  "0:0:52494646:COREL CDR:CL_TYPE_ANY:CL_TYPE_CORELDRAW",
  "0:0:52494658:COREL CDR:CL_TYPE_ANY:CL_TYPE_CORELDRAW",
  NULL
};

#endif
