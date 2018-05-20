/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/BCOVPlaybackSessionPrivate.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@protocol BCOVPlaybackSessionCommonPropertiesProtocol, BCOVPlaybackSessionPrivate;
@class BCOVSSResourcePolicy, NSString, BCOVVideo, BCOVSource, AVPlayer, AVPlayerLayer, AVMediaSelectionGroup, AVMediaSelectionOption, BCOVSessionProviderExtension, UIView;

@interface BCOVSSPlaybackSession : NSObject <BCOVPlaybackSessionPrivate, AVAssetResourceLoaderDelegate> {

	id<BCOVPlaybackSessionCommonPropertiesProtocol> _sessionCommonProperties;
	id<BCOVPlaybackSessionPrivate> _innerPlaybackSession;
	BCOVSSResourcePolicy* _resourcePolicy;

}

@property (nonatomic,retain) id<BCOVPlaybackSessionPrivate> innerPlaybackSession;                                         //@synthesize innerPlaybackSession=_innerPlaybackSession - In the implementation block
@property (nonatomic,retain) BCOVSSResourcePolicy * resourcePolicy;                                                       //@synthesize resourcePolicy=_resourcePolicy - In the implementation block
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
-(id<BCOVPlaybackSessionCommonPropertiesProtocol>)sessionCommonProperties;
-(void)setSessionCommonProperties:(id<BCOVPlaybackSessionCommonPropertiesProtocol>)arg1 ;
-(BCOVSSResourcePolicy *)resourcePolicy;
-(id<BCOVPlaybackSessionPrivate>)innerPlaybackSession;
-(id)initWithPlaybackSession:(id)arg1 resourcePolicy:(id)arg2 ;
-(void)setInnerPlaybackSession:(id<BCOVPlaybackSessionPrivate>)arg1 ;
-(void)setResourcePolicy:(BCOVSSResourcePolicy *)arg1 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
@end

