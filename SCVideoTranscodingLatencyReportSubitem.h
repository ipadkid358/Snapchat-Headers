/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class SCVideoTranscodingLatencyReportItem, NSString;

@interface SCVideoTranscodingLatencyReportSubitem : NSObject {

	SCVideoTranscodingLatencyReportItem* _superItem;
	NSString* _itemID;
	unsigned long long _index;
	double _endSegmentTime;
	double _beginFilteringTime;
	double _endFilteringTime;
	double _inputDuration;
	double _outputDuration;
	double _inputVideoBitrate;
	double _outputVideoBitrate;
	CGSize _inputResolution;
	CGSize _outputResolution;

}

@property (assign,nonatomic,__weak) SCVideoTranscodingLatencyReportItem * superItem;              //@synthesize superItem=_superItem - In the implementation block
@property (nonatomic,copy) NSString * itemID;                                                     //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) unsigned long long index;                                            //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) double endSegmentTime;                                               //@synthesize endSegmentTime=_endSegmentTime - In the implementation block
@property (assign,nonatomic) double beginFilteringTime;                                           //@synthesize beginFilteringTime=_beginFilteringTime - In the implementation block
@property (assign,nonatomic) double endFilteringTime;                                             //@synthesize endFilteringTime=_endFilteringTime - In the implementation block
@property (assign,nonatomic) double inputDuration;                                                //@synthesize inputDuration=_inputDuration - In the implementation block
@property (assign,nonatomic) double outputDuration;                                               //@synthesize outputDuration=_outputDuration - In the implementation block
@property (assign,nonatomic) CGSize inputResolution;                                              //@synthesize inputResolution=_inputResolution - In the implementation block
@property (assign,nonatomic) CGSize outputResolution;                                             //@synthesize outputResolution=_outputResolution - In the implementation block
@property (assign,nonatomic) double inputVideoBitrate;                                            //@synthesize inputVideoBitrate=_inputVideoBitrate - In the implementation block
@property (assign,nonatomic) double outputVideoBitrate;                                           //@synthesize outputVideoBitrate=_outputVideoBitrate - In the implementation block
-(BOOL)isReadyToUpload;
-(CGSize)inputResolution;
-(void)setInputResolution:(CGSize)arg1 ;
-(CGSize)outputResolution;
-(void)setOutputResolution:(CGSize)arg1 ;
-(id)metricsWithBeginSegmentTime:(double)arg1 ;
-(SCVideoTranscodingLatencyReportItem *)superItem;
-(void)setSuperItem:(SCVideoTranscodingLatencyReportItem *)arg1 ;
-(double)endSegmentTime;
-(void)setEndSegmentTime:(double)arg1 ;
-(double)beginFilteringTime;
-(void)setBeginFilteringTime:(double)arg1 ;
-(double)endFilteringTime;
-(void)setEndFilteringTime:(double)arg1 ;
-(double)inputDuration;
-(void)setInputDuration:(double)arg1 ;
-(double)outputDuration;
-(void)setOutputDuration:(double)arg1 ;
-(double)inputVideoBitrate;
-(void)setInputVideoBitrate:(double)arg1 ;
-(double)outputVideoBitrate;
-(void)setOutputVideoBitrate:(double)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(NSString *)itemID;
-(void)setItemID:(NSString *)arg1 ;
@end
