/// Create by 刘威振 13/05/2019 liuxing8807@126.com
#import "BMConstraint.h"

@interface BMViewConstraint : BMConstraint

/// First view anchor
@property (nonatomic, strong, readonly) NSLayoutAnchor *firstAnchor;

/// view for first anchor
@property (nonatomic, weak) UIView *firstAnchorView;

/// First view layout attribute
@property (nonatomic, assign, readonly) NSLayoutAttribute attribute;

/// Second view anchor
@property (nonatomic, strong, readonly) NSLayoutAnchor *secondAnchor;

/**
 * initialises the BMViewConstraint with the first part of the equation
 *
 * @param attribute first view layout attribute
 *
 * @param anchor first view anchor
 *
 * @return a new view constraint
 */
- (id)initWithAttribute:(NSLayoutAttribute)attribute anchor:(NSLayoutAnchor *)anchor;

/**
 * Get anchor that match layoutAttribute
 *
 * @param view A view to retrieve anchor
 *
 * @param layoutAttribute NSLayoutAttribute
 *
 * @return matched anchor
 */
+ (NSLayoutAnchor *)matchedAnchorForView:(UIView *)view attribute:(NSLayoutAttribute)layoutAttribute;

@end
