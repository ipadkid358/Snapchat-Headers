/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
@class NSMutableDictionary;

@interface SCBandwidthClassificationStats : NSObject {

	id<SCPerforming> _bandwidthClassificationStatsPerformer;
	double _previousTime;
	NSMutableDictionary* _classificationResults;
	NSMutableDictionary* _classificationTime;

}

@property (nonatomic,retain) NSMutableDictionary * classificationResults;              //@synthesize classificationResults=_classificationResults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * classificationTime;                 //@synthesize classificationTime=_classificationTime - In the implementation block
+(id)shared;
-(id)getClassificationResults;
-(void)setClassificationResults:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)classificationResults;
-(void)setupObservations;
-(void)bandwidthClassChanged:(id)arg1 ;
-(void)updateWithCurrentBandwidthClass:(id)arg1 ;
-(NSMutableDictionary *)classificationTime;
-(void)addClassificationResults:(id)arg1 ;
-(id)getClassificationTime;
-(void)setClassificationTime:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
@end

