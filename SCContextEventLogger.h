/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCContextSessionParams, EphemeralMedia, NSString, SCStopwatch, NSMutableOrderedSet, SCContextCardsAPIRequestTask;

@interface SCContextEventLogger : NSObject {

	SCContextSessionParams* _params;
	EphemeralMedia* _sourceMedia;
	long long _sourceMediaType;
	NSString* _geofilterId;
	SCStopwatch* _stopwatch;
	long long _tapCount;
	BOOL _hasAttachment;
	NSMutableOrderedSet* _cardIdsLoaded;
	long long _initialScrollYPosition;
	long long _maxScrollY;
	long long _availableScrollY;
	SCContextCardsAPIRequestTask* _cardsRequest;
	long long _exitType;

}

@property (assign,nonatomic) long long exitType;              //@synthesize exitType=_exitType - In the implementation block
-(void)logRequest:(id)arg1 ;
-(void)logCardAction:(long long)arg1 cardId:(id)arg2 ;
-(void)logCardLoaded:(id)arg1 ;
-(void)logScrollPosition:(long long)arg1 scrollYMax:(long long)arg2 ;
-(id)_getContextSourceMedia:(id)arg1 ;
-(long long)_sourceTypeForLaunchSource;
-(void)_setBaseParams:(id)arg1 ;
-(void)_logContextMenuPresentEvent;
-(void)_appWillTerminate:(id)arg1 ;
-(void)_removeNotificationObservers;
-(void)logContextMenuDismissed;
-(id)initWithSessionParams:(id)arg1 ;
-(void)logContextMenuPresented;
-(void)logContextMenuReappeared;
-(void)logContextMenuDisappeared;
-(void)_appWillResignActive:(id)arg1 ;
-(void)setExitType:(long long)arg1 ;
-(long long)exitType;
-(void)_appWillEnterForeground:(id)arg1 ;
@end

