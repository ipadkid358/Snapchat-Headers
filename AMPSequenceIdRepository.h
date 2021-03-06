/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMPPropertyListPersistor, AMPFilePaths;

@interface AMPSequenceIdRepository : NSObject {

	AMPPropertyListPersistor* _plistPersistor;
	AMPFilePaths* _filePaths;

}

@property (nonatomic,retain) AMPPropertyListPersistor * plistPersistor;              //@synthesize plistPersistor=_plistPersistor - In the implementation block
@property (nonatomic,retain) AMPFilePaths * filePaths;                               //@synthesize filePaths=_filePaths - In the implementation block
-(id)getSequenceIdProvider;
-(void)saveSequenceIdProvider:(id)arg1 ;
-(AMPFilePaths *)filePaths;
-(void)setFilePaths:(AMPFilePaths *)arg1 ;
-(AMPPropertyListPersistor *)plistPersistor;
-(id)initWithPlistPersistor:(id)arg1 filePaths:(id)arg2 ;
-(void)setPlistPersistor:(AMPPropertyListPersistor *)arg1 ;
@end

