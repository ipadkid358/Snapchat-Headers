/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BCOV_RACSubscriber, BCOVPlaybackSessionCommonPropertiesProtocol, BCOVPlaybackSessionPrivate;
@class NSMutableArray, BCOV_RACCompoundDisposable;

@interface BCOVBasicSessionProviderHelper : NSObject {

	BOOL _preloadingSessions;
	BOOL _shouldLoadVideo;
	NSMutableArray* _videos;
	id<BCOV_RACSubscriber> _subscriber;
	/*^block*/id _sourceSelectionPolicy;
	/*^block*/id _sessionCreationPolicy;
	/*^block*/id _sessionLoadPolicy;
	id _videosGuard;
	id<BCOVPlaybackSessionCommonPropertiesProtocol> _sessionCommonProperties;
	id<BCOVPlaybackSessionPrivate> _onDeckSession;
	BCOV_RACCompoundDisposable* _finishDeliveringDisposable;

}

@property (nonatomic,copy) NSMutableArray * videos;                                                                       //@synthesize videos=_videos - In the implementation block
@property (nonatomic,retain) id<BCOV_RACSubscriber> subscriber;                                                           //@synthesize subscriber=_subscriber - In the implementation block
@property (nonatomic,copy) id sourceSelectionPolicy;                                                                      //@synthesize sourceSelectionPolicy=_sourceSelectionPolicy - In the implementation block
@property (nonatomic,copy) id sessionCreationPolicy;                                                                      //@synthesize sessionCreationPolicy=_sessionCreationPolicy - In the implementation block
@property (nonatomic,copy) id sessionLoadPolicy;                                                                          //@synthesize sessionLoadPolicy=_sessionLoadPolicy - In the implementation block
@property (assign,nonatomic) BOOL preloadingSessions;                                                                     //@synthesize preloadingSessions=_preloadingSessions - In the implementation block
@property (nonatomic,retain) id videosGuard;                                                                              //@synthesize videosGuard=_videosGuard - In the implementation block
@property (assign,nonatomic,__weak) id<BCOVPlaybackSessionCommonPropertiesProtocol> sessionCommonProperties;              //@synthesize sessionCommonProperties=_sessionCommonProperties - In the implementation block
@property (nonatomic,retain) id<BCOVPlaybackSessionPrivate> onDeckSession;                                                //@synthesize onDeckSession=_onDeckSession - In the implementation block
@property (nonatomic,retain) BCOV_RACCompoundDisposable * finishDeliveringDisposable;                                     //@synthesize finishDeliveringDisposable=_finishDeliveringDisposable - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadVideo;                                                                        //@synthesize shouldLoadVideo=_shouldLoadVideo - In the implementation block
-(id<BCOVPlaybackSessionCommonPropertiesProtocol>)sessionCommonProperties;
-(void)setSessionCommonProperties:(id<BCOVPlaybackSessionCommonPropertiesProtocol>)arg1 ;
-(void)advanceToNext;
-(BCOV_RACCompoundDisposable *)finishDeliveringDisposable;
-(id)sourceSelectionPolicy;
-(id)sessionCreationPolicy;
-(id)videosGuard;
-(id<BCOVPlaybackSessionPrivate>)onDeckSession;
-(void)setOnDeckSession:(id<BCOVPlaybackSessionPrivate>)arg1 ;
-(id)popVideo;
-(id)constructSessionforVideo:(id)arg1 ;
-(void)advanceWhenSessionTerminates:(id)arg1 ;
-(void)loadSessionWhenInstructedByLoadPolicy:(id)arg1 ;
-(id)sessionLoadPolicy;
-(BOOL)preloadingSessions;
-(id)initWithVideos:(id)arg1 shouldLoadVideo:(BOOL)arg2 subscriber:(id)arg3 sessionCommonProperties:(id)arg4 sourceSelectionPolicy:(/*^block*/id)arg5 sessionCreationPolicy:(/*^block*/id)arg6 sessionLoadPolicy:(/*^block*/id)arg7 preloadingSessions:(BOOL)arg8 ;
-(void)startDelivering;
-(void)finishDelivering;
-(void)setSourceSelectionPolicy:(id)arg1 ;
-(void)setSessionCreationPolicy:(id)arg1 ;
-(void)setSessionLoadPolicy:(id)arg1 ;
-(void)setPreloadingSessions:(BOOL)arg1 ;
-(void)setVideosGuard:(id)arg1 ;
-(void)setFinishDeliveringDisposable:(BCOV_RACCompoundDisposable *)arg1 ;
-(void)setShouldLoadVideo:(BOOL)arg1 ;
-(BOOL)shouldLoadVideo;
-(void)setVideos:(NSMutableArray *)arg1 ;
-(NSMutableArray *)videos;
-(id<BCOV_RACSubscriber>)subscriber;
-(void)setSubscriber:(id<BCOV_RACSubscriber>)arg1 ;
@end

