/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol SCGroupStoryGeofenceCellDelegate;
@class UILabel, UIButton;

@interface SCGroupStoryGeofenceCell : UITableViewCell {

	UILabel* _mainLabel;
	UILabel* _detailLabel;
	UIButton* _editIcon;
	BOOL _isDarkThemed;
	id<SCGroupStoryGeofenceCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCGroupStoryGeofenceCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_editPressed;
-(id)initWithStyle:(long long)arg1 isDarkThemed:(BOOL)arg2 reuseIdentifier:(id)arg3 ;
-(void)_setupMainLabel;
-(void)_setupDetailLabel;
-(void)_setupEditIcon;
-(void)_updateLabelConstraints;
-(void)setDelegate:(id<SCGroupStoryGeofenceCellDelegate>)arg1 ;
-(id<SCGroupStoryGeofenceCellDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setAddress:(id)arg1 ;
@end

