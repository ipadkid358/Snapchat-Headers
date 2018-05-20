/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCHeaderDataSource.h>

@class SCHeader, UIView, SCTermsOfUseWhatsNewView, TTTAttributedLabel, UIButton, NSString;

@interface SCTermsOfUseView : UIView <SCHeaderDataSource> {

	SCHeader* _header;
	UIView* _divider;
	SCTermsOfUseWhatsNewView* _whatsNewView;
	TTTAttributedLabel* _legalese;
	UIView* _legaleseDivider;
	UIButton* _acceptButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)imageForRightButtonInState:(unsigned long long)arg1 ;
-(id)backgroundColorForHeader;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(void)initHeaderWithDelegate:(id)arg1 ;
-(void)initAcceptButtonWithTarget:(id)arg1 acceptSelector:(SEL)arg2 ;
-(void)initWhatsNewViewWithLinkDelegate:(id)arg1 ;
-(void)initLegaleseWithDelegate:(id)arg1 ;
-(void)initLogoutButton;
-(id)initWithFrame:(CGRect)arg1 headerDelegate:(id)arg2 acceptanceDelegate:(id)arg3 linkDelegate:(id)arg4 ;
-(void)flashScrollIndicators;
@end

