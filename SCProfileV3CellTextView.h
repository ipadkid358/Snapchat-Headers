/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIStackView.h>

@class UILabel, UIColor, NSString;

@interface SCProfileV3CellTextView : UIStackView {

	UILabel* _header;
	UILabel* _subText;
	UIColor* _colorOverride;

}

@property (nonatomic,copy) NSString * headerText; 
@property (nonatomic,copy) NSString * subText; 
@property (nonatomic,retain) UIColor * colorOverride;              //@synthesize colorOverride=_colorOverride - In the implementation block
-(void)setColorOverride:(UIColor *)arg1 ;
-(UIColor *)colorOverride;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)setSubText:(NSString *)arg1 ;
-(NSString *)subText;
@end
