/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UILabel, NSString;

@interface SCUpgradeVersionView : UIView {

	UIButton* _yesButton;
	UILabel* _title;
	NSString* _link;

}

@property (nonatomic,retain) UIButton * yesButton;              //@synthesize yesButton=_yesButton - In the implementation block
@property (nonatomic,retain) UILabel * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * link;                   //@synthesize link=_link - In the implementation block
-(void)setYesButton:(UIButton *)arg1 ;
-(UIButton *)yesButton;
-(void)yesButtonPressed;
-(void)upgradeDismissed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(UILabel *)arg1 ;
-(UILabel *)title;
-(void)setTitleText:(id)arg1 ;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(void)setButtonText:(id)arg1 ;
@end

