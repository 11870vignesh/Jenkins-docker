/* Copyright (c) 2002-2011 by XMLVM.org
 *
 * Project Info:  http://www.xmlvm.org
 */

// SPDX-License-Identifier: LGPL-2.1-or-later

#import "xmlvm.h"
#import "java_lang_Object.h"


// java.util.Iterator

#if defined(_WIN32) || defined(WIN32)
__declspec(dllexport)
#endif
@protocol java_util_Iterator <NSObject>

- (bool) hasNext__;
- (java_lang_Object*) next__;

@end

@interface java_util_Iterator : java_lang_Object <java_util_Iterator>
@end
