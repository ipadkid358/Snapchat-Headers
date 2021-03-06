/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/BCOVPlaybackSessionPrivate.h>

@protocol BCOVPlaybackSessionCommonPropertiesProtocol, BCOVPlaybackSessionPrivate;
@class BCOVPlaybackSessionLifecycleEvent, NSString, BCOVVideo, BCOVSource, AVPlayer, AVPlayerLayer, AVMediaSelectionGroup, AVMediaSelectionOption, BCOVSessionProviderExtension, UIView;

@interface BCOVErrorSession : NSObject <BCOVPlaybackSessionPrivate> {

	id<BCOVPlaybackSessionCommonPropertiesProtocol> _sessionCommonProperties;
	id<BCOVPlaybackSessionPrivate> _innerPlaybackSession;
	BCOVPlaybackSessionLifecycleEvent* _errorEvent;

}

@property (nonatomic,retain) id<BCOVPlaybackSessionPrivate> innerPlaybackSession;                                         //@synthesize innerPlaybackSession=_innerPlaybackSession - In the implementation block
@property (nonatomic,retain) BCOVPlaybackSessionLifecycleEvent * errorEvent;                                              //@synthesize errorEvent=_errorEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) BCOVVideo * video; 
@property (nonatomic,copy,readonly) BCOVSource * source; 
@property (nonatomic,readonly) AVPlayer * player; 
@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
@property (nonatomic,readonly) AVMediaSelectionGroup * audibleMediaSelectionGroup; 
@property (nonatomic,retain) AVMediaSelectionOption * selectedAudibleMediaOption; 
@property (nonatomic,readonly) AVMediaSelectionGroup * legibleMediaSelectionGroup; 
@property (nonatomic,retain) AVMediaSelectionOption * selectedLegibleMediaOption; 
@property (nonatomic,readonly) BCOVSessionProviderExtension * providerExtension; 
@property (assign,nonatomic,__weak) id<BCOVPlaybackSessionCommonPropertiesProtocol> sessionCommonProperties;              //@synthesize sessionCommonProperties=_sessionCommonProperties - In the implementation block
@property (nonatomic,readonly) BOOL attemptedToLoadURL; 
@property (nonatomic,retain) UIView * playerLayerView; 
-(id)lifecycle;
-(id<BCOVPlaybackSessionCommonPropertiesProtocol>)sessionCommonProperties;
-(void)setSessionCommonProperties:(id<BCOVPlaybackSessionCommonPropertiesProtocol>)arg1 ;
-(id<BCOVPlaybackSessionPrivate>)innerPlaybackSession;
-(void)setInnerPlaybackSession:(id<BCOVPlaybackSessionPrivate>)arg1 ;
-(BCOVPlaybackSessionLifecycleEvent *)errorEvent;
-(void)setErrorEvent:(BCOVPlaybackSessionLifecycleEvent *)arg1 ;
-(id)initWithPlaybackSession:(id)arg1 errorEvent:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
@end

