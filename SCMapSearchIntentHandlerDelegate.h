/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCMapSearchIntentHandlerDelegate <NSObject>
@optional
-(void)mapSearchIntentHandler:(id)arg1 didSelectFriendLocation:(id)arg2;
-(void)mapSearchIntentHandler:(id)arg1 wantsToChatWithPerson:(id)arg2;
-(void)mapSearchIntentHandler:(id)arg1 wantsToGoToCoordinate:(CLLocationCoordinate2D)arg2 atZoomLevel:(double)arg3 coordinateBounds:(MGLCoordinateBounds)arg4 useCoordinateBounds:(BOOL)arg5 withTitle:(id)arg6 dropPin:(BOOL)arg7;
-(void)mapSearchIntentHandler:(id)arg1 wantsToShowMiniProfileForPerson:(id)arg2;

@end

