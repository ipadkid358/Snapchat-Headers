/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGenericSettingsViewController.h>

@class NSString;

@interface SecurityGhostViewController : SCGenericSettingsViewController {

	BOOL _isResetPassword;
	NSString* _pageViewName;
	NSString* _infoText;

}

@property (nonatomic,retain) NSString * pageViewName;              //@synthesize pageViewName=_pageViewName - In the implementation block
@property (nonatomic,retain) NSString * infoText;                  //@synthesize infoText=_infoText - In the implementation block
-(void)leftButtonPressed;
-(BOOL)disableLeftSwipe;
-(void)setPageViewName:(NSString *)arg1 ;
-(NSString *)pageViewName;
-(id)getTitle;
-(id)getPageViewName;
-(id)init:(id)arg1 title:(id)arg2 infoText:(id)arg3 isResetPassword:(BOOL)arg4 ;
-(id)init:(id)arg1 title:(id)arg2 infoText:(id)arg3 ;
-(void)loadView;
-(void)setInfoText:(NSString *)arg1 ;
-(NSString *)infoText;
@end
