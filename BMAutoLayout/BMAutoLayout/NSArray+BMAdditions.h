/// Create by 刘威振 13/05/2019 liuxing8807@126.com
#import <Foundation/Foundation.h>
#import "BMConstraintMaker.h"

typedef NS_ENUM(NSUInteger, BMAxisType) {
    BMAxisTypeHorizontal,
    BMAxisTypeVertical
};

@interface NSArray (BMAdditions)

/**
 *  Creates a MASConstraintMaker with each view in the callee.
 *  Any constraints defined are added to the view or the appropriate superview once the block has finished executing on each view
 *
 *  @param block scope within which you can build up the constraints which you wish to apply to each view.
 *
 *  @return Array of created BMConstraints
 */
- (NSArray *)bm_makeConstraints:(void (NS_NOESCAPE ^)(BMConstraintMaker *make))block;

/**
 *  Creates a BMConstraintMaker with each view in the callee.
 *  Any constraints defined are added to each view or the appropriate superview once the block has finished executing on each view.
 *  If an existing constraint exists then it will be updated instead.
 *
 *  @param block scope within which you can build up the constraints which you wish to apply to each view.
 *
 *  @return Array of created/updated BMConstraints
 */
- (NSArray *)bm_updateConstraints:(void (NS_NOESCAPE ^)(BMConstraintMaker *make))block;

/**
 *  Creates a BMConstraintMaker with each view in the callee.
 *  Any constraints defined are added to each view or the appropriate superview once the block has finished executing on each view.
 *  All constraints previously installed for the views will be removed.
 *
 *  @param block scope within which you can build up the constraints which you wish to apply to each view.
 *
 *  @return Array of created/updated BMConstraints
 */
- (NSArray *)bm_remakeConstraints:(void (NS_NOESCAPE ^)(BMConstraintMaker *make))block;

/**
 *  distribute with fixed spacing
 *
 *  @param axisType     which axis to distribute items along
 *  @param fixedSpacing the spacing between each item
 *  @param leadSpacing  the spacing before the first item and the container
 *  @param tailSpacing  the spacing after the last item and the container
 */
- (void)bm_distributeViewsAlongAxis:(BMAxisType)axisType withFixedSpacing:(CGFloat)fixedSpacing leadSpacing:(CGFloat)leadSpacing tailSpacing:(CGFloat)tailSpacing;

/**
 *  distribute with fixed item size
 *
 *  @param axisType        which axis to distribute items along
 *  @param fixedItemLength the fixed length of each item
 *  @param totalLength the total length of super view
 *  @param leadSpacing     the spacing before the first item and the container
 *  @param tailSpacing     the spacing after the last item and the container
 */
- (void)bm_distributeViewsAlongAxis:(BMAxisType)axisType withFixedItemLength:(CGFloat)fixedItemLength totalLength:(CGFloat)totalLength leadSpacing:(CGFloat)leadSpacing tailSpacing:(CGFloat)tailSpacing;

@end
