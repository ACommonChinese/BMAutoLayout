/// Create by 刘威振 13/05/2019 liuxing8807@126.com
#import <UIKit/UIKit.h>

//! Project version number for BMAutoLayout.
FOUNDATION_EXPORT double BMAutoLayoutVersionNumber;

//! Project version string for BMAutoLayout.
FOUNDATION_EXPORT const unsigned char BMAutoLayoutVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <BMAutoLayout/PublicHeader.h>

#if __has_include(<BMAutoLayout/BMAutoLayout.h>)
#   import <BMAutoLayout/BMUtilities.h>
#   import <BMAutoLayout/UIView+BMAdditions.h>
#   import <BMAutoLayout/NSArray+BMAdditions.h>
#   import <BMAutoLayout/BMConstraint.h>
#   import <BMAutoLayout/BMCompositeConstraint.h>
#   import <BMAutoLayout/BMConstraintMaker.h>
#else
#   import "BMUtilities.h"
#   import "UIView+BMAdditions.h"
#   import "NSArray+BMAdditions.h"
#   import "BMConstraint.h"
#   import "BMCompositeConstraint.h"
#   import "BMConstraintMaker.h"
#endif


