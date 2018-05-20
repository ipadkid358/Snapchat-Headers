/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol SCSearchFormsOptionsTableViewCellDelegate;
@class UISwitch, NSString;

@interface SCSearchFormsOptionsTableViewCell : UITableViewCell {

	UISwitch* _switch;
	BOOL _isEditable;
	id<SCSearchFormsOptionsTableViewCellDelegate> _delegate;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) id<SCSearchFormsOptionsTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isEditable;                                                            //@synthesize isEditable=_isEditable - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on; 
-(void)_didSwitch:(id)arg1 ;
-(void)setDelegate:(id<SCSearchFormsOptionsTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<SCSearchFormsOptionsTableViewCellDelegate>)delegate;
-(NSString *)identifier;
-(BOOL)isEditable;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(void)setIsEditable:(BOOL)arg1 ;
@end
