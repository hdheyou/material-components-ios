/*
 Copyright 2016-present Google Inc. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import "MDCIcons.h"

/**
 The MDCIcons class is designed to be extended by adding individual icon extensions to a project.

 Individual icons can be accessed by importing their MaterialIcons+<icon_name>.h header and calling
 [MDCIcons pathFor_<icon_name>] to get the icon's file system path.
 */
@interface MDCIcons (BundleLoader)

/** Returns a disk path for an icon contained within a bundle of a given name. */
+ (nonnull NSString *)pathForIconName:(nonnull NSString *)iconName
                       withBundleName:(nonnull NSString *)bundleName;

@end
