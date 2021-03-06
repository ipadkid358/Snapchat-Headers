/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, SCFriendProfileCellView;

@interface SCFriendProfileCell : UITableViewCell {

	UIView* _bottomBorder;
	SCFriendProfileCellView* _friendProfileCellView;

}

@property (nonatomic,readonly) UIView * thumbnailBaseView; 
@property (nonatomic,readonly) SCFriendProfileCellView * friendProfileCellView;              //@synthesize friendProfileCellView=_friendProfileCellView - In the implementation block
-(void)updateCellWithConfiguration:(id)arg1 ;
-(id)currentFriend;
-(void)setBottomBorderRightOffset:(double)arg1 ;
-(void)setDefaultRightOffset;
-(void)setRightOffset:(double)arg1 ;
-(void)setBottomBorderHidden:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 isDarkThemed:(BOOL)arg2 reuseIdentifier:(id)arg3 ;
-(SCFriendProfileCellView *)friendProfileCellView;
-(UIView *)thumbnailBaseView;
-(void)prepareForReuse;
-(id)initWithDelegate:(id)arg1 ;
@end

