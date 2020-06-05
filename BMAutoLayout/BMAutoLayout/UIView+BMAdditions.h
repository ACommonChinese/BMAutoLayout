/// Create by 刘威振 13/05/2019 liuxing8807@126.com
#import <UIKit/UIKit.h>
#import "BMConstraintMaker.h"

@interface UIView (BMAdditions)

/**
 * a key to associate with this view
 */
@property (nonatomic, strong) id bm_key;

/**
 * the BMViewConstraint instances for NSLayoutConstraint
 */
@property (nonatomic, readonly) NSMutableSet *bm_installedConstraints;

/**
 *  Finds the closest common superview between this view and another view
 *
 *  @param view other view
 *
 *  @return returns nil if common superview could not be found
 */
- (instancetype)bm_closestCommonSuperview:(UIView *)view;

/**
 *  Creates a BMConstraintMaker with the callee view.
 *  Any constraints defined are added to the view or the appropriate superview once the block has finished executing
 *
 *  @param block scope within which you can build up the constraints which you wish to apply to the view.
 *
 *  @return Array of created MASConstraints
 */
- (NSArray *)bm_makeConstraints:(void(NS_NOESCAPE ^)(BMConstraintMaker *make))block;

/**
 *  Creates a BMConstraintMaker with the callee view.
 *  Any constraints defined are added to the view or the appropriate superview once the block has finished executing.
 *  If an existing constraint exists then it will be updated instead.
 *
 *  @param block scope within which you can build up the constraints which you wish to apply to the view.
 *
 *  @return Array of created/updated BMConstraints
 */
- (NSArray *)bm_updateConstraints:(void(NS_NOESCAPE ^)(BMConstraintMaker *make))block;

/**
 *  Creates a BMConstraintMaker with the callee view.
 *  Any constraints defined are added to the view or the appropriate superview once the block has finished executing.
 *  All constraints previously installed for the view will be removed.
 *
 *  @param block scope within which you can build up the constraints which you wish to apply to the view.
 *
 *  @return Array of created/updated BMConstraints
 */
- (NSArray *)bm_remakeConstraints:(void(NS_NOESCAPE ^)(BMConstraintMaker *make))block;

@end
