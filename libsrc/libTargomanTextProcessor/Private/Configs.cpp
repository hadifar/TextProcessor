/******************************************************************************
 * Targoman: A robust Machine Translation framework               *
 *                                                                            *
 * Copyright 2014-2018 by ITRC <http://itrc.ac.ir>                            *
 *                                                                            *
 * This file is part of Targoman.                                             *
 *                                                                            *
 * Targoman is free software: you can redistribute it and/or modify           *
 * it under the terms of the GNU Lesser General Public License as published   *
 * by the Free Software Foundation, either version 3 of the License, or       *
 * (at your option) any later version.                                        *
 *                                                                            *
 * Targoman is distributed in the hope that it will be useful,                *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU Lesser General Public License for more details.                        *
 * You should have received a copy of the GNU Lesser General Public License   *
 * along with Targoman. If not, see <http://www.gnu.org/licenses/>.           *
 *                                                                            *
 ******************************************************************************/
/**
 * @author S. Mohammad M. Ziabary <ziabary@targoman.com>
 * @author Behrooz Vedadian <vedadian@targoman.com>
 * @author Saeed Torabzadeh <saeed.torabzadeh@targoman.com>
 */

#include "Configs.h"
#include "libTargomanCommon/Configuration/Validators.hpp"

namespace Targoman {
namespace NLPLibs {
namespace TargomanTP{
namespace Private {

using namespace Common;
using namespace Common::Configuration;
stuConfigs Configs;

tmplConfigurable<FilePath_t> stuConfigs::AbbreviationFile(
        MAKE_CONFIG_PATH("AbbreviationFile"),
        "File path to abbreviations table file. Relative to config file path if not specified as absolute.",
        "",
        Validators::tmplPathAccessValidator<
        (enuPathAccess::Type)(enuPathAccess::File | enuPathAccess::Readable),
        false>
        );
tmplConfigurable<FilePath_t> stuConfigs::NormalizationFile(
        MAKE_CONFIG_PATH("NormalizationFile"),
        "File path to normalization rules file. Relative to config file path if not specified as absolute.",
        "",
        Validators::tmplPathAccessValidator<
        (enuPathAccess::Type)(enuPathAccess::File | enuPathAccess::Readable),
        false>
        );
tmplConfigurable<FilePath_t> stuConfigs::SpellCorrectorBaseConfigPath(
        MAKE_CONFIG_PATH("SpellCorrectorBaseConfigPath"),
        "Directory path to spell correction specific files. Relative to config file path if not specified as absolute.",
        "",
        Validators::tmplPathAccessValidator<
        (enuPathAccess::Type)(enuPathAccess::Dir | enuPathAccess::Readable),
        false>
        );
clsFileBasedConfig       stuConfigs::SpellCorrectorLanguageBasedConfigs(
        MAKE_CONFIG_PATH("SpellCorrectorLanguageBasedConfigs"),
        "Specific configurations for each language. See TargomanTextProcessor documents for more info."
        );

}
}
}
}
