/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface SCXWeather : NSObject {

	NSString* _path;
	NSMutableArray* _particleTemplates;
	double _duration;
	NSString* _overlayImageName;
	NSString* _liveEditHost;

}

@property (nonatomic,copy) NSString * liveEditHost;                             //@synthesize liveEditHost=_liveEditHost - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;                            //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSMutableArray * particleTemplates;              //@synthesize particleTemplates=_particleTemplates - In the implementation block
@property (assign,nonatomic) double duration;                                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * overlayImageName;                         //@synthesize overlayImageName=_overlayImageName - In the implementation block
+(id)effectAtPath:(id)arg1 ;
+(id)effectWithJson:(id)arg1 liveEditHost:(id)arg2 ;
+(id)emptyFallbackEffect;
+(id)demoEffectWithName:(id)arg1 ;
-(id)initWithPath:(id)arg1 liveEditHost:(id)arg2 ;
-(BOOL)_decodeJson:(id)arg1 ;
-(NSString *)liveEditHost;
-(void)setOverlayImageName:(NSString *)arg1 ;
-(void)setLiveEditHost:(NSString *)arg1 ;
-(NSMutableArray *)particleTemplates;
-(NSString *)overlayImageName;
-(id)opaqueIdentifier;
-(void)loadImageWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(NSString *)path;
@end
