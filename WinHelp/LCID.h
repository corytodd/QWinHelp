/* Locale identifier class definition.

   Copyright (C) 2010 rel-eng

   This file is part of QWinHelp.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef LCID_H_
#define LCID_H_

#include <QtGlobal>
#include <QFile>

enum LanguageID : quint16
{
    LANG_NEUTRAL = 0x00,
    LANG_INVARIANT = 0x7f,
    LANG_AFRIKAANS = 0x36,
    LANG_ALBANIAN = 0x1c,
    LANG_ARABIC = 0x01,
    LANG_ARMENIAN = 0x2b,
    LANG_ASSAMESE = 0x4d,
    LANG_AZERI = 0x2c,
    LANG_BASQUE = 0x2d,
    LANG_BELARUSIAN = 0x23,
    LANG_BENGALI = 0x45,
    LANG_BULGARIAN = 0x02,
    LANG_CATALAN = 0x03,
    LANG_CHINESE = 0x04,
    LANG_CROATIAN = 0x1a,
    LANG_CZECH = 0x05,
    LANG_DANISH = 0x06,
    LANG_DIVEHI = 0x65,
    LANG_DUTCH = 0x13,
    LANG_ENGLISH = 0x09,
    LANG_ESTONIAN = 0x25,
    LANG_FAEROESE = 0x38,
    LANG_FARSI = 0x29,
    LANG_FINNISH = 0x0b,
    LANG_FRENCH = 0x0c,
    LANG_GALICIAN = 0x56,
    LANG_GEORGIAN = 0x37,
    LANG_GERMAN = 0x07,
    LANG_GREEK = 0x08,
    LANG_GUJARATI = 0x47,
    LANG_HEBREW = 0x0d,
    LANG_HINDI = 0x39,
    LANG_HUNGARIAN = 0x0e,
    LANG_ICELANDIC = 0x0f,
    LANG_INDONESIAN = 0x21,
    LANG_ITALIAN = 0x10,
    LANG_JAPANESE = 0x11,
    LANG_KANNADA = 0x4b,
    LANG_KASHMIRI = 0x60,
    LANG_KAZAK = 0x3f,
    LANG_KONKANI = 0x57,
    LANG_KOREAN = 0x12,
    LANG_KYRGYZ = 0x40,
    LANG_LATVIAN = 0x26,
    LANG_LITHUANIAN = 0x27,
    LANG_MACEDONIAN = 0x2f,
    LANG_MALAY = 0x3e,
    LANG_MALAYALAM = 0x4c,
    LANG_MANIPURI = 0x58,
    LANG_MARATHI = 0x4e,
    LANG_MONGOLIAN = 0x50,
    LANG_NEPALI = 0x61,
    LANG_NORWEGIAN = 0x14,
    LANG_ORIYA = 0x48,
    LANG_POLISH = 0x15,
    LANG_PORTUGUESE = 0x16,
    LANG_PUNJABI = 0x46,
    LANG_ROMANIAN = 0x18,
    LANG_RUSSIAN = 0x19,
    LANG_SANSKRIT = 0x4f,
    LANG_SERBIAN = 0x1a,
    LANG_SINDHI = 0x59,
    LANG_SLOVAK = 0x1b,
    LANG_SLOVENIAN = 0x24,
    LANG_SPANISH = 0x0a,
    LANG_SWAHILI = 0x41,
    LANG_SWEDISH = 0x1d,
    LANG_SYRIAC = 0x5a,
    LANG_TAMIL = 0x49,
    LANG_TATAR = 0x44,
    LANG_TELUGU = 0x4a,
    LANG_THAI = 0x1e,
    LANG_TURKISH = 0x1f,
    LANG_UKRAINIAN = 0x22,
    LANG_URDU = 0x20,
    LANG_UZBEK = 0x43,
    LANG_VIETNAMESE = 0x2a
};

enum SubLanguageID : quint8
{
    SUBLANG_NEUTRAL = 0x00,
    SUBLANG_DEFAULT = 0x01,
    SUBLANG_SYS_DEFAULT = 0x02,
    SUBLANG_ARABIC_SAUDI_ARABIA = 0x01,
    SUBLANG_ARABIC_IRAQ = 0x02,
    SUBLANG_ARABIC_EGYPT = 0x03,
    SUBLANG_ARABIC_LIBYA = 0x04,
    SUBLANG_ARABIC_ALGERIA = 0x05,
    SUBLANG_ARABIC_MOROCCO = 0x06,
    SUBLANG_ARABIC_TUNISIA = 0x07,
    SUBLANG_ARABIC_OMAN = 0x08,
    SUBLANG_ARABIC_YEMEN = 0x09,
    SUBLANG_ARABIC_SYRIA = 0x0a,
    SUBLANG_ARABIC_JORDAN = 0x0b,
    SUBLANG_ARABIC_LEBANON = 0x0c,
    SUBLANG_ARABIC_KUWAIT = 0x0d,
    SUBLANG_ARABIC_UAE = 0x0e,
    SUBLANG_ARABIC_BAHRAIN = 0x0f,
    SUBLANG_ARABIC_QATAR = 0x10,
    SUBLANG_AZERI_LATIN = 0x01,
    SUBLANG_AZERI_CYRILLIC = 0x02,
    SUBLANG_CHINESE_TRADITIONAL = 0x01,
    SUBLANG_CHINESE_SIMPLIFIED = 0x02,
    SUBLANG_CHINESE_HONGKONG = 0x03,
    SUBLANG_CHINESE_SINGAPORE = 0x04,
    SUBLANG_CHINESE_MACAU = 0x05,
    SUBLANG_DUTCH = 0x01,
    SUBLANG_DUTCH_BELGIAN = 0x02,
    SUBLANG_ENGLISH_US = 0x01,
    SUBLANG_ENGLISH_UK = 0x02,
    SUBLANG_ENGLISH_AUS = 0x03,
    SUBLANG_ENGLISH_CAN = 0x04,
    SUBLANG_ENGLISH_NZ = 0x05,
    SUBLANG_ENGLISH_EIRE = 0x06,
    SUBLANG_ENGLISH_SOUTH_AFRICA = 0x07,
    SUBLANG_ENGLISH_JAMAICA = 0x08,
    SUBLANG_ENGLISH_CARIBBEAN = 0x09,
    SUBLANG_ENGLISH_BELIZE = 0x0a,
    SUBLANG_ENGLISH_TRINIDAD = 0x0b,
    SUBLANG_ENGLISH_ZIMBABWE = 0x0c,
    SUBLANG_ENGLISH_PHILIPPINES = 0x0d,
    SUBLANG_FRENCH = 0x01,
    SUBLANG_FRENCH_BELGIAN = 0x02,
    SUBLANG_FRENCH_CANADIAN = 0x03,
    SUBLANG_FRENCH_SWISS = 0x04,
    SUBLANG_FRENCH_LUXEMBOURG = 0x05,
    SUBLANG_FRENCH_MONACO = 0x06,
    SUBLANG_GERMAN = 0x01,
    SUBLANG_GERMAN_SWISS = 0x02,
    SUBLANG_GERMAN_AUSTRIAN = 0x03,
    SUBLANG_GERMAN_LUXEMBOURG = 0x04,
    SUBLANG_GERMAN_LIECHTENSTEIN = 0x05,
    SUBLANG_ITALIAN = 0x01,
    SUBLANG_ITALIAN_SWISS = 0x02,
    SUBLANG_KASHMIRI_SASIA = 0x02,
    SUBLANG_KASHMIRI_INDIA = 0x02,
    SUBLANG_KOREAN = 0x01,
    SUBLANG_LITHUANIAN = 0x01,
    SUBLANG_MALAY_MALAYSIA = 0x01,
    SUBLANG_MALAY_BRUNEI_DARUSSALAM = 0x02,
    SUBLANG_NEPALI_INDIA = 0x02,
    SUBLANG_NORWEGIAN_BOKMAL = 0x01,
    SUBLANG_NORWEGIAN_NYNORSK = 0x02,
    SUBLANG_PORTUGUESE = 0x02,
    SUBLANG_PORTUGUESE_BRAZILIAN = 0x01,
    SUBLANG_SERBIAN_LATIN = 0x02,
    SUBLANG_SERBIAN_CYRILLIC = 0x03,
    SUBLANG_SPANISH = 0x01,
    SUBLANG_SPANISH_MEXICAN = 0x02,
    SUBLANG_SPANISH_MODERN = 0x03,
    SUBLANG_SPANISH_GUATEMALA = 0x04,
    SUBLANG_SPANISH_COSTA_RICA = 0x05,
    SUBLANG_SPANISH_PANAMA = 0x06,
    SUBLANG_SPANISH_DOMINICAN_REPUBLIC = 0x07,
    SUBLANG_SPANISH_VENEZUELA = 0x08,
    SUBLANG_SPANISH_COLOMBIA = 0x09,
    SUBLANG_SPANISH_PERU = 0x0a,
    SUBLANG_SPANISH_ARGENTINA = 0x0b,
    SUBLANG_SPANISH_ECUADOR = 0x0c,
    SUBLANG_SPANISH_CHILE = 0x0d,
    SUBLANG_SPANISH_URUGUAY = 0x0e,
    SUBLANG_SPANISH_PARAGUAY = 0x0f,
    SUBLANG_SPANISH_BOLIVIA = 0x10,
    SUBLANG_SPANISH_EL_SALVADOR = 0x11,
    SUBLANG_SPANISH_HONDURAS = 0x12,
    SUBLANG_SPANISH_NICARAGUA = 0x13,
    SUBLANG_SPANISH_PUERTO_RICO = 0x14,
    SUBLANG_SWEDISH = 0x01,
    SUBLANG_SWEDISH_FINLAND = 0x02,
    SUBLANG_URDU_PAKISTAN = 0x01,
    SUBLANG_URDU_INDIA = 0x02,
    SUBLANG_UZBEK_LATIN = 0x01,
    SUBLANG_UZBEK_CYRILLIC = 0x02
};

enum SortID : quint8
{
    SORT_DEFAULT = 0x0,
    SORT_JAPANESE_XJIS = 0x0,
    SORT_JAPANESE_UNICODE = 0x1,
    SORT_CHINESE_BIG5 = 0x0,
    SORT_CHINESE_PRCP = 0x0,
    SORT_CHINESE_UNICODE = 0x1,
    SORT_CHINESE_PRC = 0x2,
    SORT_CHINESE_BOPOMOFO = 0x3,
    SORT_KOREAN_KSC = 0x0,
    SORT_KOREAN_UNICODE = 0x1,
    SORT_GERMAN_PHONE_BOOK = 0x1,
    SORT_HUNGARIAN_DEFAULT = 0x0,
    SORT_HUNGARIAN_TECHNICAL = 0x1,
    SORT_GEORGIAN_TRADITIONAL = 0x0,
    SORT_GEORGIAN_MODERN = 0x1
};

class LCIDex
{
private:
    /** Значение идентификатора языка, 10 бит. */
    quint16 primaryLanguageID;
    /** Значение идентификатора разновидности языка, 6 бит. */
    quint8 subLanguageID;
    /** Значение идентификатора сортировки, 4 бита. */
    quint8 sortID;
    /** Версия сортировки, 4 бита. */
    quint8 sortVersion;
public:
    LCIDex();
    LCIDex(quint16 primaryLanguageID,
        quint8 subLanguageID,
        quint8 sortID,
        quint8 sortVersion);
    LCIDex(const LCIDex& rhs);
    virtual ~LCIDex();
    LCIDex & operator=(const LCIDex & rhs);
    quint16 getPrimaryLanguageID() const;
    quint8 getSubLanguageID() const;
    quint8 getSortID() const;
    quint8 getSortVersion() const;
};

#endif /* LCID_H_ */
