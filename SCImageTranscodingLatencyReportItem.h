/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCMediaTranscodingLatencyReportItem.h>

@interface SCImageTranscodingLatencyReportItem : SCMediaTranscodingLatencyReportItem {

	double _beginEncodingTime;
	double _endEncodingTime;
	unsigned long long _outputFileSize;
	CGSize _inputResolution;
	CGSize _outputResolution;

}

@property (assign,nonatomic) double beginEncodingTime;                       //@synthesize beginEncodingTime=_beginEncodingTime - In the implementation block
@property (assign,nonatomic) double endEncodingTime;                         //@synthesize endEncodingTime=_endEncodingTime - In the implementation block
@property (assign,nonatomic) CGSize inputResolution;                         //@synthesize inputResolution=_inputResolution - In the implementation block
@property (assign,nonatomic) CGSize outputResolution;                        //@synthesize outputResolution=_outputResolution - In the implementation block
@property (assign,nonatomic) unsigned long long outputFileSize;              //@synthesize outputFileSize=_outputFileSize - In the implementation block
-(double)beginEncodingTime;
-(void)setBeginEncodingTime:(double)arg1 ;
-(double)endEncodingTime;
-(void)setEndEncodingTime:(double)arg1 ;
-(CGSize)inputResolution;
-(void)setInputResolution:(CGSize)arg1 ;
-(CGSize)outputResolution;
-(void)setOutputResolution:(CGSize)arg1 ;
-(unsigned long long)outputFileSize;
-(void)setOutputFileSize:(unsigned long long)arg1 ;
-(id)metrics;
-(id)initWithItemID:(id)arg1 ;
@end

