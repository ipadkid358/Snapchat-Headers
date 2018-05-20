/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SCSpectaclesImuDataSet : NSObject {

	NSArray* _imuFrames;
	unsigned long long _sampleFrequencyHz;
	unsigned long long _imuVersion;

}

@property (nonatomic,retain) NSArray * imuFrames;                               //@synthesize imuFrames=_imuFrames - In the implementation block
@property (assign,nonatomic) unsigned long long sampleFrequencyHz;              //@synthesize sampleFrequencyHz=_sampleFrequencyHz - In the implementation block
@property (assign,nonatomic) unsigned long long imuVersion;                     //@synthesize imuVersion=_imuVersion - In the implementation block
-(unsigned long long)imuVersion;
-(NSArray *)imuFrames;
-(unsigned long long)sampleFrequencyHz;
-(id)initWithLagunaData:(id)arg1 ;
-(id)initWithMalibuData:(id)arg1 ;
-(BOOL)isValidForVideoOfDuration:(double)arg1 ;
-(void)setImuFrames:(NSArray *)arg1 ;
-(void)setSampleFrequencyHz:(unsigned long long)arg1 ;
-(void)setImuVersion:(unsigned long long)arg1 ;
@end
