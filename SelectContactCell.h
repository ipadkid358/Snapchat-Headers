/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIView, UIImageView, MASConstraint, UILabel;

@interface SelectContactCell : UITableViewCell {

	UIView* _bottomBorder;
	UIView* _friendMojiContainerViewSubview;
	UIView* _labelContainer;
	UIView* _friendMojiView;
	BOOL _isSearching;
	BOOL _isFastStoryPost;
	BOOL _selectionAllowed;
	UIImageView* _circle;
	MASConstraint* _circleRightConstraint;
	unsigned long long _circleType;
	UILabel* _nameLabel;
	UILabel* _subNameLabel;
	UIView* _friendMojiContainerView;

}

@property (nonatomic,retain) UIImageView * circle;                               //@synthesize circle=_circle - In the implementation block
@property (nonatomic,retain) MASConstraint * circleRightConstraint;              //@synthesize circleRightConstraint=_circleRightConstraint - In the implementation block
@property (assign,nonatomic) unsigned long long circleType;                      //@synthesize circleType=_circleType - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * subNameLabel;                             //@synthesize subNameLabel=_subNameLabel - In the implementation block
@property (nonatomic,retain) UIView * friendMojiContainerView;                   //@synthesize friendMojiContainerView=_friendMojiContainerView - In the implementation block
@property (assign,nonatomic) BOOL selectionAllowed;                              //@synthesize selectionAllowed=_selectionAllowed - In the implementation block
-(void)setCellSelected:(BOOL)arg1 ;
-(void)setCircleType:(unsigned long long)arg1 ;
-(CGSize)_getLabelSize:(id)arg1 width:(double)arg2 ;
-(UILabel *)subNameLabel;
-(void)setCellSelected:(BOOL)arg1 shouldSetFondSelected:(BOOL)arg2 ;
-(void)setBackgroundSelected:(BOOL)arg1 ;
-(void)setCircleSelected:(BOOL)arg1 ;
-(void)setFontSelected:(BOOL)arg1 ;
-(void)setSelectedBackground;
-(void)setUnselectedBackground;
-(unsigned long long)circleType;
-(void)showSeparator:(BOOL)arg1 ;
-(void)addFriendMojiView:(id)arg1 ;
-(void)setSelectionAllowed:(BOOL)arg1 ;
-(void)toggleRightOffsetIsSearching:(BOOL)arg1 isFastStoryPost:(BOOL)arg2 ;
-(void)hideCircleViewAndUpdateEmojiView;
-(BOOL)selectionAllowed;
-(void)setCircle:(UIImageView *)arg1 ;
-(MASConstraint *)circleRightConstraint;
-(void)setCircleRightConstraint:(MASConstraint *)arg1 ;
-(void)setSubNameLabel:(UILabel *)arg1 ;
-(UIView *)friendMojiContainerView;
-(void)setFriendMojiContainerView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(id)textLabel;
-(id)detailTextLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(UIImageView *)circle;
@end

