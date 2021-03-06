/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMiniProfileRowController.h>

@protocol SCMiniProfileMapRowControllerDelegate;
@class SCMTFriendLocation, SCUserSession, SCEmbeddedMapViewLoggingSession;

@interface SCMiniProfileMapRowController : SCMiniProfileRowController {

	SCMTFriendLocation* _friendLocation;
	SCUserSession* _userSession;
	id<SCMiniProfileMapRowControllerDelegate> _delegate;
	SCEmbeddedMapViewLoggingSession* _loggingSession;

}
-(void)willDisplayCell:(id)arg1 ;
-(void)didSelectCell;
-(id)initWithFriendLocation:(id)arg1 userSession:(id)arg2 delegate:(id)arg3 loggingSession:(id)arg4 ;
-(Class)cellClass;
-(double)cellHeight;
@end

