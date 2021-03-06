/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCBandwidthRecord : NSObject {

	double _recordStartTime;
	unsigned long long _unzippedBytesReceivedInCurrentSessionAtRecordStart;
	unsigned long long _zippedBytesReceivedInCurrentSessionAtRecordStart;

}
-(id)initWithUnzippedBytesReceivedSinceSessionStart:(unsigned long long)arg1 zippedBytesReceivedSinceSessionStart:(unsigned long long)arg2 ;
-(void)reportBandwidth:(long long)arg1 withUnzippedBytesReceivedInCurrentSessionAtRecordFinish:(unsigned long long)arg2 zippedBytesReceivedInCurrentSessionAtRecordFinish:(unsigned long long)arg3 lastAnnouncedBandwidthEstimate:(long long)arg4 bandwidthExperimentEstimate:(long long)arg5 lastAnnouncedBandwidthExperimentEstimate:(long long)arg6 bandwidthExperimentConcurrency:(long long)arg7 bandwidthExperimentDownloadWorkload:(long long)arg8 ;
@end

