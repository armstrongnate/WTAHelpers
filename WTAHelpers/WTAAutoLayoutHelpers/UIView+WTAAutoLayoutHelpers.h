//
//  UIView+WTAAutoLayoutHelpers.h
//  WTALayoutHelpers
//
//  Created by Trung Tran on 2/19/14.
//  Copyright (c) 2014 WillowTree Apps, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (WTAAutoLayoutHelpers)

///---------------------------------
/// @name Convenience Constructors
///---------------------------------

/**
 Method to create a view with translatesAutoresizingMasks set to NO. 
 
 @return The newly created view.
 */
+ (id)wta_autolayoutView;

///--------------------------------------------------
/// @name Edge Constraints to Superview
///--------------------------------------------------

/**
 Creates Top, Leading, Bottom and Trailing constraints with inset. The constraints are added to the view's superview.
 
 @param inset for the constraints.
 @return array of constraints
 */
- (NSArray *)wta_addEdgeConstraintsToSuperview:(UIEdgeInsets)inset;

/**
 Creates a leading constraint to the current view with offset. The constraint is added the view's superview
 
 @param offset from the edge.
 @return The newly added constraint.
 */
- (NSLayoutConstraint *)wta_addLeadingConstraintToSuperviewOffset:(CGFloat)offset;

/**
 Creates a trailing constraint to the current view with offset. The constraint is added the view's superview.
 
 @param offset from the edge.
 @return The newly added constraint.
 */
- (NSLayoutConstraint *)wta_addTrailingConstraintToSuperviewOffset:(CGFloat)offset;

/**
 Creates a top constraint to the current view with offset. The constraint is added the view's superview.
 
 @param offset from the edge.
 @return The newly added constraint.
 */
- (NSLayoutConstraint *)wta_addTopConstraintToSuperviewOffset:(CGFloat)offset;

/**
 Creates a bottom constraint to the current view with offset. The constraint is added the view's superview.
 
 @param offset from the edge.
 @return The newly added constraint.
 */
- (NSLayoutConstraint *)wta_addBottomConstraintToSuperviewOffset:(CGFloat)offset;

///-------------------------------------
/// @name Align Edges for Sibling Views
///-------------------------------------

/**
 Aligns leading edge of view with another view. The constraint is added to the view's superview.
 
 @param withView View that will be effected by the constraint.
 @param offset between the withView and toView.
 @return The newly added constraint.
 */
- (NSLayoutConstraint *)wta_addLeadingConstraintToView:(UIView *)toView offset:(CGFloat)offset;

/**
 Aligns trailing edge of a view with another view. The constraint is added to the view's superview.
 
 @param toView View that the constraint is related to.
 @param offset from the edge.
 @return The newly added constraint.
 */
- (NSLayoutConstraint *)wta_addTrailingConstraintToView:(UIView *)toView offset:(CGFloat)offset;

/**
 Aligns top edge of a view with another view. The constraint is added to the view's superview.
 
 @param toView View that the constraint is related to.
 @param offset between the withView and toView.
 @return The newly added constraint.
 */
- (NSLayoutConstraint *)wta_addTopConstraintToView:(UIView *)toView offset:(CGFloat)offset;

/**
 Aligns bottom edge of a view with another view. The constraint is added to the view's superview.
 
 @param toView View that the constraint is related to.
 @param offset between the withView and toView.
 @return The newly added constraint.
 */
- (NSLayoutConstraint *)wta_addBottomConstraintToView:(UIView *)toView offset:(CGFloat)offset;

///----------------------------------------
/// @name Separation Between Sibling Views
///----------------------------------------

/**
 Places the current view to the right of a view with a separation.
 
 @param view that the current view will placed to the right of.
 @param separation between the sibling views.
 */
- (NSLayoutConstraint *)wta_addConstraintPlacingViewRightOfView:(UIView *)view separation:(CGFloat)separation;

/**
 Places the current view to the left of a view with a separation.
 
 @param view that the current view will placed to the left of.
 @param separation between the sibling views.
 */
- (NSLayoutConstraint *)wta_addConstraintPlacingViewLeftOfView:(UIView *)view separation:(CGFloat)separation;

/**
 Places the current view to the Top of a view with a separation.
 
 @param view that the current view will placed to the top of.
 @param separation between the sibling views.
 */
- (NSLayoutConstraint *)wta_addConstraintPlacingViewAboveView:(UIView *)view separation:(CGFloat)separation;

/**
 Places the current view to the bottom of a view with a separation.
 
 @param view that the current view will placed to the bottom of.
 @param separation between the sibling views.
 */
- (NSLayoutConstraint *)wta_addConstraintPlacingViewBelowView:(UIView *)view separation:(CGFloat)separation;

///-----------------------------
/// @name Centering Constraints
///-----------------------------

/**
 Creates a constraint to vertically center the current view. The constraint is added to the view's superview.
 
 @param offset to move the view vertically from the center.
 @return The newly added constraint.
 */
- (NSLayoutConstraint *)wta_addVerticallyCenterConstraintToSuperview;
- (NSLayoutConstraint *)wta_addVerticallyCenterConstraintToSuperviewOffset:(CGFloat)offset;

/**
 Creates a constraint to horizontally center the current view. The constraint is added to the view's superview.
 
 @param offset to move the view horizontally from the center.
 @return The newly added constraint.
 */
- (NSLayoutConstraint *)wta_addHorizontallyCenterConstraintToSuperview;
- (NSLayoutConstraint *)wta_addHorizontallyCenterConstraintToSuperviewOffset:(CGFloat)offset;

/**
 Creates a constraint to vertically center a view to a view. The constraint is added to the withView's superview.
 
 @param withView the view to be centered
 @param toView the view that the withView will be centered in relation to.
 @param offset to move the view vertically from the center.
 @return The newly added constraint.
 */
+ (NSLayoutConstraint *)wta_addVerticallyCenterConstraintWithView:(UIView *)withView toView:(UIView *)toView offset:(CGFloat)offset;

/**
 Creates a constraint to horizontally center a view to a view. The constraint is added to the withView's superview.
 
 @param withView the view to be centered
 @param toView the view that the withView will be centered in relation to.
 @param offset to move the view horizontally from the center.
 @return The newly added constraint.
 */
+ (NSLayoutConstraint *)wta_addHorizontallyCenterConstraintWithView:(UIView *)withView toView:(UIView *)toView offset:(CGFloat)offset;

///-------------------------
/// @name Size Constraints
///-------------------------

/**
 Adds constraints for height and width from the given size struct.
 
 @param size for the view.
 @return array of size constraints.
 */
- (NSArray *)wta_addSizeConstraints:(CGSize)size;

/**
 Adds a constraint to set the height of the current view.
 
 @param height of the view.
 @return The newly added constraint.
 */
- (NSLayoutConstraint *)wta_addHeightConstraint:(CGFloat)height;

/**
 Adds a constraint to set the width of the current view.
 
 @param width of the view.
 @return The newly added constraint.
 */
- (NSLayoutConstraint *)wta_addWidthConstraint:(CGFloat)width;

@end