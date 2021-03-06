/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCXWeatherAnimatedElement.h>

@class SCXWeatherParticleTemplate, NSString;

@interface SCXWeatherParticleTemplateSession : NSObject <SCXWeatherAnimatedElement> {

	double _addedAtTime;
	double _removedAtTime;
	SCXWeatherParticleTemplate* _template;
	double _seedOffset;

}

@property (assign,nonatomic) double addedAtTime;                                 //@synthesize addedAtTime=_addedAtTime - In the implementation block
@property (assign,nonatomic) double removedAtTime;                               //@synthesize removedAtTime=_removedAtTime - In the implementation block
@property (nonatomic,retain) SCXWeatherParticleTemplate * template;              //@synthesize template=_template - In the implementation block
@property (assign,nonatomic) double seedOffset;                                  //@synthesize seedOffset=_seedOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)addedAtTime;
-(void)setAddedAtTime:(double)arg1 ;
-(double)removedAtTime;
-(void)setRemovedAtTime:(double)arg1 ;
-(double)seedOffset;
-(void)setSeedOffset:(double)arg1 ;
-(void)setTemplate:(SCXWeatherParticleTemplate *)arg1 ;
-(SCXWeatherParticleTemplate *)template;
-(BOOL)isDone;
@end

