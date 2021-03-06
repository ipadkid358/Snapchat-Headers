/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface SCSavedChatNotificationView : UIView {

	UILabel* _savedLabel;
	UILabel* _unsavedLabel;
	CGSize _savedLabelSize;
	CGSize _unsavedLabelSize;

}

@property (nonatomic,retain) UILabel * savedLabel;                 //@synthesize savedLabel=_savedLabel - In the implementation block
@property (nonatomic,retain) UILabel * unsavedLabel;               //@synthesize unsavedLabel=_unsavedLabel - In the implementation block
@property (assign,nonatomic) CGSize savedLabelSize;                //@synthesize savedLabelSize=_savedLabelSize - In the implementation block
@property (assign,nonatomic) CGSize unsavedLabelSize;              //@synthesize unsavedLabelSize=_unsavedLabelSize - In the implementation block
+(id)labelTextColor;
+(id)labelFont;
-(void)setSavedState:(BOOL)arg1 ;
-(BOOL)_isSavedLabelVisible;
-(BOOL)_isUnsavedLabelVisible;
-(UILabel *)unsavedLabel;
-(void)setUnsavedLabel:(UILabel *)arg1 ;
-(CGSize)savedLabelSize;
-(void)setSavedLabelSize:(CGSize)arg1 ;
-(CGSize)unsavedLabelSize;
-(void)setUnsavedLabelSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)labelWidth;
-(void)setSavedLabel:(UILabel *)arg1 ;
-(UILabel *)savedLabel;
@end

