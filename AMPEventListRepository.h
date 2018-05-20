/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMPDictionaryPersistor, AMPEventSerializer, AMPFilePaths;

@interface AMPEventListRepository : NSObject {

	AMPDictionaryPersistor* _dictionaryPersistor;
	AMPEventSerializer* _eventSerializer;
	AMPFilePaths* _filePaths;

}

@property (nonatomic,retain) AMPDictionaryPersistor * dictionaryPersistor;              //@synthesize dictionaryPersistor=_dictionaryPersistor - In the implementation block
@property (nonatomic,retain) AMPEventSerializer * eventSerializer;                      //@synthesize eventSerializer=_eventSerializer - In the implementation block
@property (nonatomic,retain) AMPFilePaths * filePaths;                                  //@synthesize filePaths=_filePaths - In the implementation block
-(AMPDictionaryPersistor *)dictionaryPersistor;
-(AMPFilePaths *)filePaths;
-(AMPEventSerializer *)eventSerializer;
-(id)initWithDictionaryPersistor:(id)arg1 eventSerializer:(id)arg2 filePaths:(id)arg3 ;
-(id)getEventList;
-(void)saveEventList:(id)arg1 ;
-(void)setDictionaryPersistor:(AMPDictionaryPersistor *)arg1 ;
-(void)setEventSerializer:(AMPEventSerializer *)arg1 ;
-(void)setFilePaths:(AMPFilePaths *)arg1 ;
@end

