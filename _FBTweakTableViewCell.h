/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIView, UISwitch, UITextField, UIStepper, FBTweak, _FBTweakCollectionViewController, NSString;

@interface _FBTweakTableViewCell : UITableViewCell <UITextFieldDelegate> {

	UIView* _accessoryView;
	unsigned long long _mode;
	UISwitch* _switch;
	UITextField* _textField;
	UIStepper* _stepper;
	FBTweak* _tweak;
	_FBTweakCollectionViewController* _parentTweakCollectionViewController;

}

@property (nonatomic,retain) FBTweak * tweak;                                                                            //@synthesize tweak=_tweak - In the implementation block
@property (assign,nonatomic,__weak) _FBTweakCollectionViewController * parentTweakCollectionViewController;              //@synthesize parentTweakCollectionViewController=_parentTweakCollectionViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBTweak *)tweak;
-(void)setTweak:(FBTweak *)arg1 ;
-(void)setParentTweakCollectionViewController:(_FBTweakCollectionViewController *)arg1 ;
-(void)_stepperChanged:(id)arg1 ;
-(void)_updateMode:(unsigned long long)arg1 ;
-(void)_updateValue:(id)arg1 primary:(BOOL)arg2 write:(BOOL)arg3 ;
-(_FBTweakCollectionViewController *)parentTweakCollectionViewController;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_switchChanged:(id)arg1 ;
@end
