// Copyright (c) 2024 The Brave Authors. All rights reserved.
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this file,
// You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef BRAVE_BROWSER_UI_BRAVE_UI_FEATURES_H_
#define BRAVE_BROWSER_UI_BRAVE_UI_FEATURES_H_

#include "base/feature_list.h"
#include "build/build_config.h"

namespace features {

BASE_DECLARE_FEATURE(kBraveNtpSearchWidget);
#if BUILDFLAG(IS_WIN)
BASE_DECLARE_FEATURE(kBraveWorkaroundNewWindowFlash);
#endif  // BUILDFLAG(IS_WIN)

}  // namespace features

#endif  // BRAVE_BROWSER_UI_BRAVE_UI_FEATURES_H_
