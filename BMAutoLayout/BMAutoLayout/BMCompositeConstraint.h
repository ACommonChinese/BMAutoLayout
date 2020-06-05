/// Create by 刘威振 13/05/2019 liuxing8807@126.com
#import "BMConstraint.h"

/**
 *  A group of MASConstraint objects
 */
@interface BMCompositeConstraint : BMConstraint

/**
 *  Creates a composite with a predefined array of children
 *
 *  @param children child MASConstraints
 *
 *  @return a composite constraint
 */
- (id)initWithChildren:(NSArray<BMConstraint *> *)children;

@end
